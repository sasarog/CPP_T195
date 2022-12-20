#pragma once
#include<iostream>
class Chelovek
{
public:
	Chelovek();
	Chelovek(
		std::string name,
		int age,
		int heit
	);
protected:
	std::string name;
	int age;
	double heit;
public:
	void setName(std::string name);
	std::string getName();
	void setAge(int age) ;
	int getAge();
	void setHeit(int heit);
	int getHeit();
	void print();
};

