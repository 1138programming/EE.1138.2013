#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/* Victors */
#define LEFT1 1 
#define LEFT2 2
#define RIGHT1 7
#define RIGHT2 9
#define VTURR 4
#define ALT 5

/* Joysticks */
#define JRIGHT 2
#define JLEFT 1
#define JTHIRD 3

/* Sonar */
#define ANALOG 1

/* Gyro */
#define G_RATE 1
#define G_TEMP 2

/* Accelerometer */ 
#define ACC_1 1
#define ACC_2 2
#define ACC_3 3
#define ACC_4 4

/* Speeds */
#define S10 1.00
#define S75 0.75
#define S50 0.50
#define S25 0.25
#define S00 0.00
#define SB1 -0.50

/* VEX Encoder Definitions */
#define V393_SPEED 0.04081632653
#define V393_TORQUE 0.02551020408
#define TICKS 8
#define TIME_DELTA 0.00000213333
#define STARTING_ADDRESS 0x10
#define DEFAULT_ADDRESS 0x30
#define ADDRESS_REGISTER 0x4D
#define POSITION_REGISTER 0x40
#define VELOCITY_REGISTER 0x44
#define ZERO_REGISTER 0x4A
#define UNTERMINATE_REGISTER 0x4B
#define TERMINATE_REGISTER 0x4C

#endif
