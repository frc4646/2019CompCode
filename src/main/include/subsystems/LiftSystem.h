/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/WPILib.h>
#include <frc/AnalogInput.h>
#include <PinEnums.h>

using namespace frc;

class LiftSystem : public Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  Spark * liftMotor;
  AnalogInput* LiftStringPotPin;
  double height;
  double pinVoltage;
  double m;
  double b;
  
  //below will be edited with testing; currently are the values from last year.
  const double MinHeight = 10.5; //minimum height of the lift, inches
	const double MaxHeight = 81; //maximum height of the lift, inches
	const double MinValue = 1.355; //the voltage of the stringpot at MinHeight
	const double MaxValue = 3.173; //the voltage of the stringpot at MaxHeight
  
  bool lifttoheight = false;

 public:
  LiftSystem(MotorPin liftMotorPin, AnalogPin stringPotPin);
  void InitDefaultCommand() override;
  void LiftAtSpeed(double speed);
  double GetHeight();
  void HoldHeight();
  double GetMinHeight();
  bool GetLiftToHeight();
  void SetLiftToHeight(bool value);
  const double HoldPower = 0.2;
  const double MaxPower = 0.8; 
  const double MinPower = -0.5;
  const double level1 = 19;
  const double level2 = 47;
  const double level3 = 75;
  
};
