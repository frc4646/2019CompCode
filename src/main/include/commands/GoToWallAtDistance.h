/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef GoToWallAtDistance_H
#define GoToWallAtDistance_H

#include <CommandBase.h>

class GoToWallAtDistance : public CommandBase {
 private:
  const double RequiredDistanceMillimeters = 304.8; //Equal to 12 inches
  const double DriveSpeed = 0.5f; //Probably Need to Change
 public:
  GoToWallAtDistance();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
#endif
