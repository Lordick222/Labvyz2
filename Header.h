#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
int mistake()
{
	int i;
	while (1)
	{
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}


int mistake_(int a)
{
	int i=0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			return i;
			break;
		}
		if ((std::cin.fail())||(i<0)||(i>a))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}

int f_menu()
{
	std::cout << "\n\n1> Students \n2> Teachers\n3> Worker\n4> Go out\n\n";
	return(mistake());
}

int student_menu()
{
	std::cout << "\t1> Add new Student \n\t2> Delete student by number \n\t3> Write all Students\n\t4> Go out\n\n\t";
	return(mistake());
}

int prepod_menu()
{
	std::cout << "\t1> Add new teacher \n\t2> Delete teacher by number \n\t3> Write all teachers\n\t4> Go out\n\n\t";
	return(mistake());
}

int personal_menu()
{
	int i{ 0 };
	std::cout << "\t1> Add new worker \n\t2> Delete worker by number \n\t3> Write all workers\n\t4> Go out\n\n\t";
	return(mistake());	
}

void pust(int a)
{
	if (a == 0)
	{
		std::cout << "\n\t\t\tNULL\n";
	}
}



// Dinamik



