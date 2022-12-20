#pragma once
#include <iostream>

#ifdef DLLCHELOVEK_EXPORTS
#define DLLCHELOVEK_API __declspec(dllexport) 
#else
#define DLLCHELOVEK_API __declspec(dllimport)
#endif


class  DLLCHELOVEK_API  Chelovek
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
	void setAge(int age);
	int getAge();
	void setHeit(int heit);
	int getHeit();
	void print();
};



