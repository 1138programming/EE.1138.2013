#ifndef POSITION_TRAKCING
#define POSITION_TRAKCING

// storing x and y positions

struct Vector2f
{
	float x;

	float y;
};

class Position_Tracking
{
public:

	Position_Tracking();

	~Position_Tracking();

	void Update_Postion(float x_accel, float y_accel, float rotation, double encoder_pass_l, double encoder_pass_r, float speed_l, float speed_r);

	Vector2f* getPos(); // get the user's position

	float getPosX(); // get the x position

	float getPosY(); // get the y position

	void setPos(Vector2f* pos); // set the position

	void setPosX(float x); // set the x position

	void setPosY(float y); // set the y position

private:

	Vector2f* position; // the current position

	Vector2f* init_speed; // the initial acceleration

	double* encoder_l;
	
	double* encoder_r;
	
	double Abs(double number);
};
#endif
