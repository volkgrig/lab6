#include "stringg.h"
#include "pch.h"
#include "car.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

void addi( int n)
{
std::cin.ignore();
std::cout << "name model\n";
getline(std::cin, namem);
for (int i = 0; i < 3; i++)
{
	std::cout << "spent" << i + 1 << "\n";
	std::cin >> spentpr[i];
}
mass[n].set_model(namem);
mass[n].set_spent(spentpr);
std::cout << "maxspeed\n";
std::cin >> maxspeedd;
std::cout << "power\n";
std::cin >> powerr;
mass[n].set_maxspeed(maxspeedd);
mass[n].set_power(powerr);
n++;
f1.open("tth.txt", std::ios::out);
f1 << n << "\n";
f1 << std::setw(16) << "model" << std::setw(16) << "city" << std::setw(16) << "highway" << std::setw(16) << "combined" << std::setw(16) << "maxspeed" << std::setw(16) << "power" << "\n";
for (c = 0; c < n; c++)
{
	f1 << std::setw(16) << mass[c].get_model() << std::setw(16) << mass[c].get_spent1() << std::setw(16) << mass[c].get_spent2() << std::setw(16) << mass[c].get_spent3() << std::setw(16) << mass[c].get_maxspeed() << std::setw(16) << mass[c].get_power() << "\n";
}
f1.close();
std::cout << "Good \n";
return 0;
}