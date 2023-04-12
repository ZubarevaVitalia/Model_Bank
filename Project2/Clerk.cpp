#include "Clerk.h"

void Clerk::setEndTime(int time) {
	endTime += time;
	clerkWorkingTime += time;
};
void Clerk::newDay() {
	endTime = 0;
};
