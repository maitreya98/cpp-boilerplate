//! "Copyright [2019] Markose Jacob, Maitreya Kulkarni
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
    // num = 1;
    num = actual_velocity_;
    double time_step = 0.1;
    double integral = 0, previous_error = 0;
    for (int i = 0; i < 1000; i++) {
      double p_term, i_term, d_term, error = 0;
      error = target_velocity_ - num;

      // Proportional term
      p_term = kp_ * error;

      // Intergral term
      integral = integral + (error * time_step);
      i_term = ki_ *  integral;

      // derivative term
      d_term = kd_ * ((error - previous_error)/time_step);

      // New velocity
      num = p_term + i_term + d_term;

      previous_error = error;
    }
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
