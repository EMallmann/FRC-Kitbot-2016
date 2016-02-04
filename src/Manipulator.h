/*
 * Manipulator.h 
 *
 *  Created on: Feb 3, 2016
 *      Authors: Eric and Jack
 */

#include "WPILib.h"
#ifndef SRC_MANIPULATOR_H_
#define SRC_MANIPULATOR_H_
class Manipulator {
	Victor *mnVic;
public:
	Manipulator();
	bool manipulate();
};


#endif /* SRC_MANIPULATOR_H_ */

