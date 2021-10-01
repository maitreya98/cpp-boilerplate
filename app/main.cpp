//! "Copyright [2019] Maitreya Kulkarni , Markose Jacob"
/**
* @file main.cpp
* @author Jagadesh NischalNagireddi,Toyas Dhake,ShivamAkhauri,ChinmayJoshi
* @date 26 Spetember 2019
* @brief This is a the main class for the PID implementation project
* PID controller implementation for mobile robot.
*/

// Header files
#include <iostream>
#include "pid.cpp"
#include "../include/pid.hpp"

/**
* @brief Main compute function for PID Controller
* @author Maitreya Kulkarni
*/ 

int main()
{   
    // Constructor Initializing vale Kp, Ki, Kd.
    ttd::PID pid(5,0.2,3);

    // double tv,av;    
    std::cout<<"Enter target velocity :"<<std::endl;
    std::cin>>pid.target_velocity;
    std::cout<<"Enter actual velocity :"<<std::endl;
    std::cin>>pid.actual_velocity;

    // Main compute function 
    std::cout<<"Computed velocity is "<<pid.compute(pid.actual_velocity,pid.target_velocity)<<std::endl;
    return 0;
}
