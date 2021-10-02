/**
* @file main.cpp
* @author Jagadesh NischalNagireddi,Toyas Dhake,ShivamAkhauri,ChinmayJoshi
* @date 26 Spetember 2019
* @copyright [2021] <Maitreya Kulkarni , Markose Jacob>
* @brief This is a the main class for the PID implementation project
* PID controller implementation for mobile robot.
*/

// Header files
#include <iostream>
#include "../include/pid.hpp"

/**
* @brief Main compute function for PID Controller
*/

int main() {
    // Constructor Initializing vale Kp, Ki, Kd.
    ttd::PID pid(0.2, 0.2, 0.2, 15, 5);
    // Main compute function
    std::cout << "Computed velocity is " << pid.Compute() << std::endl;
    return 0;
}
