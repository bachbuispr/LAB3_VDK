/*
 * global.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Galaxy
 */

#include "global.h"

int mode = INIT;
int status = 0;
int state = init;

int yellowTime;
int greenTime;
int redTime;

int ledModeData;
int ledValueData;

void initValues() {
	yellowTime = YELLOW_TIME;
	greenTime = GREEN_TIME;
	redTime = RED_TIME;
	ledModeData = redTime;
	ledValueData = greenTime;
}
