/*
 * ActuatorNeck360
 * Version 0.1.0 May, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Controls the neck of a robot using a continous rotation servo.
 */

#ifndef ActuatorNeck360_h
#define ActuatorNeck360_h
#define LIBRARY_VERSION	 0.1

#include <Servo.h>

// Class ActuatorNeck360
class ActuatorNeck360 {
 
	/** Public elements. **/
	public:
	
		/**
		 * Construct.
		 */
		ActuatorNeck360();
	
		/**
		 * Attach the given pins.
		 * @param pin: pin where the servo is connected.
		 */
		void attach(int pin);

		/**
		 * Rotates left.
		 */
		void rotateClockwise();

		/**
		 * Rotates Right.
		 */
		void rotateCounterclockwise();

		/**
		 * Goes to the center.
		 */
		void center();

	private:

		/** Attributes **/

		//Stop position of the servos.
		int stop_position = 95;

		//Controls the right servo.
		Servo neck;

};

#endif

