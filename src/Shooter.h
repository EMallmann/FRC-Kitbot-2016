/*
 * Shooter.h
 *
 *  Created on: Feb 3, 2016
 *      Authors: Eric and Jack
 */
#include "WPILib.h"
#ifndef SRC_SHOOTER_H_
#define SRC_SHOOTER_H_

class Shooter {
	//motor controllers or pneumatics
public:
	Shooter();
	void shoot();
	void takeInBall();
	void angleBall();
};



#endif /* SRC_SHOOTER_H_ */
