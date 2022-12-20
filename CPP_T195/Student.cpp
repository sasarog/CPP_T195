#include "Student.h"

void Student::setAge(int age)
{
	if (age >= 15) {
		this->age = age;
	}
	else {
		std::cerr << "You are DAWN.\n Student age can not less than 15.";
	}
}
