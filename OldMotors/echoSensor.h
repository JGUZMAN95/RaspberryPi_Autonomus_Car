#ifndef ECHOSENSOR_H
#define ECHOSENSOR_H
#define SPEED_OF_SOUND 34300 // 34300 cm/s

// ECHO SENSOR PINS
#define FRONT_TRIG 20
#define FRONT_ECHO 21
#define LEFT_TRIG 17
#define LEFT_ECHO 27
#define RIGHT_TRIG 14
#define RIGHT_ECHO 15

double frontEchoDistance();
double leftEchoDistance();
double rightEchoDistance();


#endif
