#include "Position_Tracking.h"

#include "stdio.h"

#include "string"

#define _USE_MATH_DEFINES
#define M_PI 3.141592654

#include "math.h"

// constructor method

Position_Tracking::Position_Tracking()
{
	position = new Vector2f; // allocate the vector to the heap

	// set to 0
	
	position->x = 0;

	position->y = 0;

	// acceleration variables

	init_speed = new Vector2f(); // allocate the memory

	init_speed->x = 0;

	init_speed->y = 6;
	
	// init the left encoder
	
	encoder_l = new double();
	
	*encoder_l = 0;
			
	// init the right encoder
	
	encoder_r = new double();
	
	*encoder_r = 0;
}

// destructor method

Position_Tracking::~Position_Tracking()
{
	delete position;

	delete init_speed;
	
	delete encoder_l;
	
	delete encoder_r;
}

double Position_Tracking::Abs(double number)
{
	if (number < 0)
		return -number;
	
	return number;
}


// update the current position

void Position_Tracking::Update_Postion(float x_accel, float y_accel, float rotation, double encoder_pass_l, double encoder_pass_r, float speed_l, float speed_r)
{
	if (encoder_pass_l == *encoder_l && encoder_pass_r == *encoder_r)
	{
		init_speed->x = 0;
		
		return;
	}
	
	// Check the direction we are traveling in
	
	/*short direction;
	
	if (Abs(speed_l) > Abs(speed_r))
	{
		if (speed_l > 0)
			direction = -1;
		else
			direction = 1;
	}
	else
	{
		if (speed_r > 0)
			direction = -1;
		else
			direction = 1;
	}
	*/
	// update encoder vars
	
	*encoder_l = encoder_pass_l;
	
	*encoder_r = encoder_pass_r;
	
	x_accel *= 32.1740; // convert to ft/sec^2

	//y_accel *= 32.1740; // convert to ft/sec^2

	const float time = 0.01; // the integral of time that we are checking updating

	float x = /*direction * */(init_speed->x * time + .5 * x_accel * pow(time, 2)); // set the x distance

	init_speed->x += x_accel * time; // add the acceleration to the speed.  It is assumed that during this time you are accelerating.

	if (init_speed->x < 0)
		init_speed->x = 0;
	
	const float y = 0; // zero out the y movement
	
	position->x += float(cos(rotation*M_PI/180) * x - sin(rotation*M_PI/180) * y); // the new x position

	position->y += float(sin(rotation*M_PI/180) * x + cos(rotation*M_PI/180) * y); // the new y position
}

// accessor methods

// get the position

Vector2f* Position_Tracking::getPos()
{
	return position;
}

// get the position x

float Position_Tracking::getPosX()
{
	return position->x;
}

// get the position y

float Position_Tracking::getPosY()
{
	return position->y;
}

// mutator methods

void Position_Tracking::setPos(Vector2f* pos)
{
	memcpy(position, pos, sizeof(Vector2f)); // copy the structure
}

// get the position x

void Position_Tracking::setPosX(float x)
{
	position->x = x;
}

// get the position y

void Position_Tracking::setPosY(float y)
{
	position->y = y;
}
