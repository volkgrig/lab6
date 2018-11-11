/* car.cpp */
#include "car.h"
#include <string>

void Cars::set_model(std::string model)
{
	Cars::namem = model;
}
std::string Cars::get_model()
{
	return Cars::namem;
}

void Cars::set_spent(double spent[3])
{
	for (int i = 0; i < 3; i++)
	{
		Cars::spentpr[i] = spent[i];
	}
}
double Cars::get_spent1()
{
	return Cars::spentpr[0];
}
double Cars::get_spent2()
{
	return Cars::spentpr[1];
}
double Cars::get_spent3()
{
	return Cars::spentpr[2];
}
void Cars::set_maxspeed(double maxspeed)
{
	Cars::maxspeedd = maxspeed;
}
double Cars::get_maxspeed()
{
	return Cars::maxspeedd;
}

void Cars::set_power(double power)
{
	Cars::powerr = power;
}
double Cars::get_power()
{
	return Cars::powerr;
}