/**
* @file pid.h
* @author Maitreya Kulkarni (Driver), Markose Jacob (Navigator)
* @date 2 October 2021
* @copyright 2021 Maitreya Kulkarni , Markose Jacob
* @brief This is a class for a PID controller
*/
#ifndef INCLUDE_pid_hpp_
#define INCLUDE_pid_hpp_

#pragma once
#include <iostream>

namespace ttd {
class PID {
 public:
        double target_velocity_, actual_velocity_;
        // compute method here
        double Compute();
        double get_kp();
        double get_ki();
        double get_kd();
        PID(double kp = 1, double ki = 1, double kd = 1, double
        target_velocity = 10, double actual_velocity = 5) :
        kp_{kp}, ki_{ki}, kd_{kd}, target_velocity_{target_velocity},
        actual_velocity_{actual_velocity} { std::cout << "Constructor called"
        << std::endl; };
        ~PID() { std::cout << "Destructor called" << std::endl; };

 private:
        double kp_, ki_, kd_;
};
}  // namespace ttd

#endif  // INCLUDE_pid_hpp_
