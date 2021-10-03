/**
* @file main.cpp
* @author "Maitreya Kulkarni , Markose Jacob"
* @date 26 Spetember 2019
* @copyright [2021] <Maitreya Kulkarni , Markose Jacob>
* @brief This is a the main class for the PID implementation project
* PID controller implementation for mobile robot.
*/

// Header files
#include <iostream>
// #include "pid.cpp"
#include "../include/pid.hpp"

/**
* @brief Main compute function for PID Controller
*/ 

int main()
{   
    // Constructor Initializing vale Kp, Ki, Kd.
    ttd::PID pid(0.2, 0.2, 0.2, 15, 5);


    // double tv,av;    
    // std::cout<<"Enter target velocity :"<<std::endl;
    // std::cin>>pid.target_velocity;
    // std::cout<<"Enter actual velocity :"<<std::endl;
    // std::cin>>pid.actual_velocity;

    // Main compute function 
    std::cout<<"Computed velocity is "<<pid.compute(pid.actual_velocity,pid.target_velocity)<<std::endl;
    return 0;
}
