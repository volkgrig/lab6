/* car.h */
#pragma once
#include <string>

class Cars
{
private:
	std::string namem;
	double spentpr[3];
	double maxspeedd;
	double powerr;
public:
	void set_model(std::string model);
	std::string get_model();
	void set_spent(double spent[3]);
	double get_spent1();
	double get_spent2();
	double get_spent3();
	void set_maxspeed(double maxspeed);
	double get_maxspeed();
	void set_power(double power);
	double get_power();
};

