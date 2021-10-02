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
* @params nil
* @return  returns 
*/
double ttd::PID::Compute() {
    double num;
    num = 1;
    return num;
}

/**
* @breif Function to access value of kd
* @return value of kd
*/
double ttd::PID::get_kd() {
    return kd_;

/**
* @breif Function to access value of ki
* @return value of ki
*/}
double ttd::PID::get_ki() {
    return ki_;
}

/**
* @breif Function to access value of kp
* @return value of kp
*/

double ttd::PID::get_kp() {
    return kp_;
}
