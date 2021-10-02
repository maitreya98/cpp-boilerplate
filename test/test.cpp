#include <gtest/gtest.h>
#include "../include/pid.hpp"



TEST(computeTest, should_pass){
  ttd::PID pid(0.2, 0.2, 0.2, 15, 5);
  double something = pid.compute(pid.actual_velocity , pid.target_velocity);
  EXPECT_NEAR(pid.target_velocity, something, 0.1);
}

TEST (kpgetterTest, should_pass){
  ttd::PID pid(0.2,0.2,0.2);
  EXPECT_EQ(0.2, pid.getKp());
}

TEST (kigetterTest, should_pass){
  ttd::PID pid(0.2,0.2,0.2);
  EXPECT_EQ(0.2, pid.getKi());
}

TEST (kdgetterTest, should_pass){
  ttd::PID pid(0.2,0.2,0.2);
  EXPECT_EQ(0.2, pid.getKd());
}