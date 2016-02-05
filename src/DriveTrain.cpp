/*
 * DriveTrain.cpp
 *
 *  Created on: Jan 31, 2016
 *      Authors: Eric and Jack
 */

#include <DriveTrain.h>



DriveTrain::DriveTrain() {
		vic1 = new Victor(3);
		vic2= new Victor(2);


		vic3= new Victor(1);
		vic4= new Victor(0);
		myRobot= new RobotDrive(vic1,vic2,vic3,vic4);

		leftEncoder = new Encoder (2,3, true, CounterBase:: k4X); //check ports
		rightEncoder = new Encoder (0,1, true, CounterBase:: k4X);
		leftEncoder->SetDistancePerPulse((-1*4*3.14159)/360); //check circumference/(pulses per revolution)
		rightEncoder->SetDistancePerPulse((-1*4*3.15159)/360);

		leftStick = new Joystick(0);
		rightStick= new Joystick(1);
}
	void DriveTrain::AutonomousInit(){
		leftEncoder->Reset();
		rightEncoder->Reset();}


	void DriveTrain::TeleopInit(){
		leftEncoder->Reset();
		rightEncoder->Reset();
	}
	double DriveTrain::getThrottle(double val){
		 float throttle = leftStick->GetThrottle();
		 throttle++;
		 throttle = throttle *((1-val)/2);


		 throttle+= val;
		 return throttle;}

	void DriveTrain::Drive(){


		float throttle = getThrottle(.4);

		myRobot->TankDrive(leftStick->GetY()*throttle, rightStick->GetY()*throttle, true);

		SmartDashboard::PutNumber("left distance", leftEncoder->GetDistance());
		SmartDashboard::PutNumber("right distance", rightEncoder->GetDistance());
		//myRobot->ArcadeDrive(stick->GetY()*throttle, stick->GetTwist(),true);
	}


	void DriveTrain::DriveSet(float speed, float angle){
		myRobot->ArcadeDrive(speed,angle,true);
	}
