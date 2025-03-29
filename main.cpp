/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Ayan                                                      */
/*    Created:      3/29/2025, 9:35:33 AM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

inertial Inert = inertial(PORT1);
rotation RLeft = rotation(PORT2);
rotation RRight = rotation(PORT3);
rotation RBack = rotation(PORT4);
distance DLeft = distance(PORT5);
distance DRight = distance(PORT6);
distance DBack = distance(PORT7);
distance DFront = distance(PORT8);
motor MLF = motor(PORT9);
motor MLB = motor(PORT10);
motor MRF = motor(PORT11);
motor MRB = motor(PORT12);

void pre_auton(void) {

  Inert.calibrate();
  RLeft.setPosition(0, degrees);
  RRight.setPosition(0, degrees);
  RBack.setPosition(0, degrees);

}

/*---------------------------------------------------------------------------*/

void autonomous(void) {
  
}

/*---------------------------------------------------------------------------*/

void usercontrol(void) {

  while (1) {

    wait(20, msec); 

  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
