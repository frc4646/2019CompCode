/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>

using namespace frc;
using namespace wpi;

OI::OI() :
  // Process operator interface input here.
  leftJoystick(0),
  rightJoystick(1),
  mechJoystick(2)
{}

double OI::GetLeftJoystickY()
{
  return leftJoystick.GetRawAxis(2);
}

double OI::GetRightJoystickY()
{
  return rightJoystick.GetRawAxis(2);
}

bool OI::GetMechJoystickButton9() //For intake intake
{
  return mechJoystick.GetRawButtonPressed(9);
}

bool OI::GetMechJoystickButton10() //For outake intake
{
  return mechJoystick.GetRawButtonPressed(10);
}

bool OI::GetMechJoystickButton11() //For intake cylinder and grabber up.
{
  return mechJoystick.GetRawButtonPressed(11);
}

bool OI::GetMechJoystickButton12() //For intake cylinder and grabber down.
{
  return mechJoystick.GetRawButtonPressed(12);
}

double OI::GetMechJoystickThrottle() //For Lift
{
  return mechJoystick.GetRawAxis(3);
}

bool OI::GetMechJoystickButton1() //For Lift.
{
  return mechJoystick.GetRawButtonPressed(1);
}