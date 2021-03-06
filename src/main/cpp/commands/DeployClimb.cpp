/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DeployClimb.h"

DeployClimb::DeployClimb() : CommandBase("DeployClimb") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) slam.get());

  //requires climber subsystem
}

// Called just before this Command runs the first time
void DeployClimb::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DeployClimb::Execute() {
  //deploy the climber out (towards the ground) to drive onto hab levels 2 and 3
  slam->SlamWheelDown();
}

// Make this return true when this Command no longer needs to run execute()
bool DeployClimb::IsFinished() { 
  return slam->IsSlamWheelDown();
}

// Called once after isFinished returns true
void DeployClimb::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DeployClimb::Interrupted() {
  End();
}
