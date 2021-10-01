//! "Copyright [2019] Jagadesh,ToyasDhake,ShivamAkhauri,ChinmayJoshi"
/**
* @file pid.cpp
* @author Maitreya Kulkarni (Driver), Markose Jacob (Navigator)
* @date 2 October 2021
* @copyright 2021 Maitreya Kulkarni, Markose Jacob
* @brief This is a class for a PID controller
*/

/// Header files
#include "../include/pid.hpp"
#include <iostream>

/**
* @brief This is the function which computes the pid calculations
* @params actual_velocity Recent velocity reading
* @params target_velocity Expected velocity reading
* @return  returns 
*/
double ttd::PID::compute(double actual_velocity , double target_velocity){
    std::cout<<"compute called"<<std::endl;
    return 1;
}

/**
* @breif Function to access value of kd
* @return value of kd
*/
double ttd::PID::getKd(){
    return kd;

/**
* @breif Function to access value of ki
* @return value of ki
*/}
double ttd::PID::getKi(){
    return ki;
}

/**
* @breif Function to access value of kp
* @return value of kp
*/

double ttd::PID::getKp(){
    return kp;
}

