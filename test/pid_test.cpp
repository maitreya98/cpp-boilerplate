#include <gtest/gtest.h>
#include "../include/pid.hpp"



TEST(computeTest, should_pass){
  ttd::PID pid(0.2, 0.2, 0.2, 15, 5);
  double something = pid.Compute();
  EXPECT_NEAR(pid.target_velocity_, something, 0.1);
}

TEST (kpgetterTest, should_pass){
  ttd::PID pid(0.2,0.2,0.2);
  EXPECT_EQ(0.2, pid.get_kp());
}

TEST (kigetterTest, should_pass){
  ttd::PID pid(0.2,0.2,0.2);
  EXPECT_EQ(0.2, pid.get_ki());
}

TEST (kdgetterTest, should_pass){
  ttd::PID pid(0.2,0.2,0.2);
  EXPECT_EQ(0.2, pid.get_kd());
}