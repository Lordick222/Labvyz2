#pragma once
#include <iostream>
#include <fstream>

int f_menu()
{
	int i{ 0 };
	std::cout << "\n\n1> Students \n2> Teachers\n3> Worker\n4> Go out\n\n";
	std::cin >> i;
	std::cin.ignore(32767, '\n');
	return i;
}

int student_menu()
{
	int i{ 0 };
	std::cout << "\t1> Add new Student \n\t2> Delete student by number \n\t3> Write all Students\n\t4> Go out\n\n";
	std::cin >> i;
	std::cin.ignore(32767, '\n');
	return i;
}

int prepod_menu()
{
	int i{ 0 };
	std::cout << "\t1> Add new teacher \n\t2> Delete teacher by number \n\t3> Write all teachers\n\t4> Go out\n\n";
	std::cin >> i;
	std::cin.ignore(32767, '\n');
	return i;
}

int personal_menu()
{
	int i{ 0 };
	std::cout << "\t1> Add new worker \n\t2> Delete worker by number \n\t3> Write all workers\n\t4> Go out\n\n";
	std::cin >> i;
	std::cin.ignore(32767, '\n');
	return i;
}


