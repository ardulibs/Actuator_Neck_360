/*
 * RobotNeck360
 * Version 0.1.0 May, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Controls the neck of a robot using a continous rotation servo.
 */

#include "RobotNeck360.h"
#include "Arduino.h"

   
/** CONSTRUCTORS **/

/**
 * Construct.
 */
RobotNeck360::RobotNeck360()
{
}

/** PUBLIC METHODS **/

/**
 * Attach the given pins.
 * @param pin: pin where the servo is connected.
 */
void RobotNeck360::attach(int pin)
{
	neck.attach(pin);
}

/**
 * Rotates left.
 */
void RobotNeck360::rotateClockwise()
{
	neck.write(stop_position-10);
	delay(800);
	neck.write(stop_position);
}

/**
 * Rotates Right.
 */
void RobotNeck360::rotateCounterclockwise()
{
	neck.write(stop_position+10);
	delay(800);
	neck.write(stop_position);
}

/**
 * Goes to the center.
 */
void RobotNeck360::center()
{
	neck.write(stop_position);
}