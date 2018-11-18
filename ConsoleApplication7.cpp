#include "pch.h"
#include "car.h"
#include "car.cpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

int main()
{
	std::fstream f1,f2,f3,out;
	f1.open("tth.txt", std::ios::in);
	std::string s;
	getline(f1, s);
	int n = atoi(s.c_str());
	getline(f1, s);
	std::cout << s << "\n";
	int c;
	Cars *mass = new Cars[n * 2];
	Cars *mass2 = new Cars[n * 2];
	int k;
	int p;
	std::string namem, s2;
	double spentpr[3];
	double maxspeedd, powerr;
	char *s4, *s3;
	for (int j = 0; j < n; j++)
	{
		getline(f1, s);
		std::cout << s << "\n";
		k = 0;
		for (p = 0; p < 6; p++)
		{
			s2 = "";
			for (k = 0 + p * 16; k < 16 + 16 * p; k++)
			{
				if (s[k] != ' ')
				{
					s2 += s[k];
				}
			}
			switch (p)
			{
			case 0: namem = s2;
			case 1: spentpr[0] = atof(s2.c_str());
			case 2: spentpr[1] = atof(s2.c_str());
			case 3: spentpr[2] = atof(s2.c_str());
			case 4: maxspeedd = atof(s2.c_str());
			case 5: powerr = atof(s2.c_str());
			}
		}
		mass[j].set_model(namem);
		mass[j].set_spent(spentpr);
		mass[j].set_maxspeed(maxspeedd);
		mass[j].set_power(powerr);
	};
	f1.close();
	while (true)
	{
		std::cout << "Do you want to add something? (y/n)\n";
		std::cin >> s2;
		if (s2 == "y")
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

		}

		else
		{
			std::cout << "bye";
			break;
		}
	}
	/*out.open("tth2.bin", std::ios::binary| std::ios::out);
	for (c = 0; c < n; c++)
	{
		out.write((char*)&mass[c].get_model(), sizeof(Cars));
	}
	out.close();
	f3.open("tth2.bin", std::ios::binary);
	for (c = 0; c < n; c++)
	{
		f3.read((char*)&mass2[c].get_model(), sizeof(Cars));
		std::cout << "xsx" << mass2[c].get_model()<<"\n";
	}
	f3.close();*/
	return 0;
}

