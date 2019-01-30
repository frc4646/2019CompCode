/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

/*
                              ..                    ..                         ...               
           .,.         ',,,,,,,;;:;;;;;;;;;;;;;;;;;;;;:::;;;;:;;;;;;;;;;;;;;;;;;;;;;:;;,.           
           ;lc.       .:ooollllllllllllllllllllllllllooooollllllllllllllllllllllllllllll:.          
          ,loo:.      .:ool;........................,coool,..........''''''''''''''''''''.          
         ,loooo:.     .:ooc,.                     ..;loool:.        .';:::::::::::::::::,.          
        'lol::ol;.   .'cooc,.                    .';loc:col;.        ,looolllllllllllooo:.          
       .col, .col;.   ':ool;.............       .;clol,.,col;.       ,looc,''''''''';loo:.          
      .col;.  .col;.  'cooollllllllllllc'      .,lool;. .,lol;.      ,loo:.         'coo:.          
     .coo:.    'col,...,::::;;::::::clol,     .,cool:.   .;lol,.    .,loo:.         'loo:.          
    .:ool:,,,',;cool,.             .;lol,     'coool:;;;;;:llol,.    ,loo:.         'coo:.          
   .:oolllllllllllloc'             .;lol,    'coollllllllllllooc,.   ,coo:.         'coo:.          
  .;loc'..........;loc'.           .;lol,   .cooc'..........':ooc'  .,coo:.         'coo:.          
 .;loc'           .;loc:::::::::::::clol,  .:ooc'            .cooc. .,cool;,,,,,,,,,:loo:.          
 ,llc'             .;looolllllllllllllll,..;llc'              'cll:..,looollllllllllllll:.          
 ....               .;looc,.............. .....                ......,looc'..............           
                      'col:'.                                       .,loo:.                         
                       .;lol:'.                                      ,loo:.                   .     
                         .;lolc;..                                   ,loo:.               ....      
                           .,:lolc;'.                                ,loo:.           ......        
                              .';clll:;,..                           ,loo:.     ...'''...           
                                 ..';:lllc:;;,'.....                .,looc'.',,,,'..                
                                      ..',;:cllllccc::;;;;;;,,,,;;;;;clool;,'..                     
                                             ....''',,,;;;;;;;;;,,''.;loo:.                         
                                                                     .',,.                          
*/

#include "CommandBase.h"
#include <frc/Commands/Scheduler.h>
#include <subsystems/TankDriveSystem.h>
#include <subsystems/LiftSystem.h>
#include "subsystems/TiltSystem.h"

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.

std::unique_ptr<TankDriveSystem> CommandBase::drivetrain = NULL; //std::make_unique<TankDriveSystem>();
std::unique_ptr<LiftSystem> CommandBase::lift = NULL;
std::unique_ptr<TiltSystem> CommandBase::tilt = NULL;
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}

void CommandBase::init() {
	drivetrain.reset(new TankDriveSystem());
	lift.reset(new LiftSystem());
  tilt.reset(new TiltSystem());
}
