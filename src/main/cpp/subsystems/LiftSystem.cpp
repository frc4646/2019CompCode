/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/LiftSystem.h"

LiftSystem::LiftSystem() : Subsystem("LiftSystem") {}

void LiftSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void LiftSystem::LiftAtSpeed(double speed){
  //liftMotor->Set(speed);
}
double LiftSystem::GetHeight(){
  //stringpot->GetUrHeightYouStupidStringpot; //do mathessss
}
void LiftSystem::HoldHeight(){
  //liftMotor->Hold(speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
