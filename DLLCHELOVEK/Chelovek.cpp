#include "pch.h"
#include "Chelovek.h"
#include <iostream>
Chelovek::Chelovek()
{
	this->name = "";
	this->age = 0;
	this->heit = 0;
}
Chelovek::Chelovek(std::string name, int age, int heit)
{
	setName(name);
	setAge(age);
	setHeit(heit);
}
void Chelovek::setName(std::string name)
{
	this->name = name;
}

std::string Chelovek::getName()
{
	return this->name;
}

void Chelovek::setAge(int age)
{
	if (age >= 0) {
		this->age = age;
	}
	else {
		std::cerr << "You are DAWN.\n Age can not less than zero.";
	}
}

int Chelovek::getAge()
{
	return this->age;
}

void Chelovek::setHeit(int heit)
{
	if (heit >= 0) {
		this->heit = heit;
	}
	else {
		std::cerr << "You are DAWN.\n Height can not less than zero.";

	}
}

int Chelovek::getHeit()
{
	return this->heit;
}

void Chelovek::print()
{
	std::cout
		<< "\nName: " << this->name
		<< "\nAge: " << this->age
		<< "\nHeight: " << this->heit
		<< std::endl;
}
