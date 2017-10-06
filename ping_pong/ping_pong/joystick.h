/*
 * joystick.h
 *
 * Created: 04.10.2017 16:22:13
 *  Author: andrholt
 */ 


#ifndef JOYSTICK_H_
#define JOYSTICK_H_

typedef enum{UP, DOWN, RIGHT, LEFT, CENTER} joystick_dir;

int joy_stick_read(int channel);
int slider_read(int channel);
int buttons_read(int button);
joystick_dir find_joystick_dir(void); 


#endif /* JOYSTICK_H_ */