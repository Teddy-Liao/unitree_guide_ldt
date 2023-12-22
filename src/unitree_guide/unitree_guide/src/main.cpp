/**********************************************************************
 Copyright (c) 2020-2023, Unitree Robotics.Co.Ltd. All rights reserved.
***********************************************************************/
#include <iostream>
#include <unistd.h>
#include <csignal>
#include <sched.h>

#include "control/ControlFrame.h"
#include "control/CtrlComponents.h"
#include "Gait/WaveGenerator.h"
#include "control/BalanceCtrl.h"

#ifdef COMPILE_WITH_REAL_ROBOT
#include "interface/IOSDK.h"
#endif // COMPILE_WITH_REAL_ROBOT

#ifdef COMPILE_WITH_ROS
#include "interface/KeyBoard.h"
#include "interface/IOROS.h"
#endif // COMPILE_WITH_ROS

bool running = true;

// over watch the ctrl+c command
void ShutDown(int sig)
{
    std::cout << "stop the controller" << std::endl;
    running = false;
}

void setProcessScheduler()
{
    pid_t pid = getpid();
    sched_param param;
    param.sched_priority = sched_get_priority_max(SCHED_FIFO);
    if (sched_setscheduler(pid, SCHED_FIFO, &param) == -1)
    {
        std::cout << "[ERROR] Function setProcessScheduler failed." << std::endl;
    }
}

int main(int argc, char **argv)
{
    /* set real-time process */
    setProcessScheduler();
    /* set the print format */
    std::cout << std::fixed << std::setprecision(3);

#ifdef RUN_ROS
    ros::init(argc, argv, "unitree_gazebo_servo");
#endif // RUN_ROS

    IOInterface *ioInter;
    CtrlPlatform ctrlPlat;

#ifdef COMPILE_WITH_SIMULATION
    ioInter = new IOROS();
    ctrlPlat = CtrlPlatform::GAZEBO;
#endif // COMPILE_WITH_SIMULATION

#ifdef COMPILE_WITH_REAL_ROBOT
    #ifdef ROBOT_TYPE_Go2
        unitree::robot::ChannelFactory::Instance()->Init(0, argv[1]);
    #endif
    ioInter = new IOSDK(); // IOSDK.cpp 中定义了sendRecv，lowCmd，lowState等
    ctrlPlat = CtrlPlatform::REALROBOT;
    std::cout << "succeed to initiate IOSDK" << std::endl;
#endif // COMPILE_WITH_REAL_ROBOT

    CtrlComponents *ctrlComp = new CtrlComponents(ioInter);
    ctrlComp->ctrlPlatform = ctrlPlat;
    ctrlComp->dt = 0.002; // run at 500hz
    ctrlComp->running = &running;

#ifdef ROBOT_TYPE_A1
    ctrlComp->robotModel = new A1Robot();
#endif
#ifdef ROBOT_TYPE_Go1
    ctrlComp->robotModel = new Go1Robot();
#endif
#ifdef ROBOT_TYPE_Go2
    ctrlComp->robotModel = new Go2Robot();
#endif


    ctrlComp->waveGen = new WaveGenerator(0.45, 0.5, Vec4(0, 0.5, 0.5, 0)); // Trot, this gait is stable in real world
    // ctrlComp->waveGen = new WaveGenerator(0.6, 0.75, Vec4(0, 0.25, 0.5, 0.75));  //Crawl, only for sim
    // ctrlComp->waveGen = new WaveGenerator(0.4, 0.6, Vec4(0, 0.5, 0.5, 0));  //Walking Trot, only for sim
    // ctrlComp->waveGen = new WaveGenerator(0.4, 0.35, Vec4(0, 0.5, 0.5, 0));  //Running Trot, only for sim
    // ctrlComp->waveGen = new WaveGenerator(0.4, 0.7, Vec4(0, 0, 0, 0));  //Pronk, only for sim

    ctrlComp->geneObj();// 运行Estimator和BalanceCtrl

    ControlFrame ctrlFrame(ctrlComp);

    signal(SIGINT, ShutDown);

    while (running)
    {
        ctrlFrame.run(); // 运行FSM中的run()
    }

    delete ctrlComp;
    return 0;
}
