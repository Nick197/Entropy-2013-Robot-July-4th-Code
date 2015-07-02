

#include "AutonomousCommand7.h"
#include "autonomous.h"

AutonomousCommand7::AutonomousCommand7() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// The following variables are automatically assigned by
	// robotbuilder and will be updated the next time you export to
	// Java from robot builder. Do not put any code or make any change
	// in the following block or it will be lost on an update. To
	// prevent this subsystem from being automatically updated, delete
	// the following line.
	wpi_assert(Robot::drive != NULL);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drive);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void AutonomousCommand7::Initialize() {
	//RobotMap::DRIVE_QUADRATURE_ENCODER_LEFT->Start();
	//RobotMap::DRIVE_QUADRATURE_ENCODER_RIGHT->Start();
	//EntropyAutonomousInit(Robot::drive);
	//Robot::drive->auto_drive_straight(20, .6);
}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand7::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand7::IsFinished() {
	//return EntropyAnonymousFinished();
	return true;
}

// Called once after isFinished returns true
void AutonomousCommand7::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousCommand7::Interrupted() {
	printf("Command Interupted !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	End();
}
