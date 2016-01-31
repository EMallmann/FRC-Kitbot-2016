#ifndef _DRIVETRAIN_H_
#define _DRIVETRAIN_H_
class DriveTrain {

	Victor *vic1;
	Victor *vic2;
  Victor *vic3;
	Victor *vic4;
	
	Joystick *stick;

  RobotDrive *myRobot;
	
	Encoder *leftEncoder;
	Encoder *rightEncoder;
	
public:
	DriveTrain();
	


	
	
	double getThrottle(double);
	void DriveSet(float, float);
	
	void AutonomousInit();
	void TeleopInit();
	};
#endif
