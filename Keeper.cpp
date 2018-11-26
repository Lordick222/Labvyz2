#include "Keeper.h"
#include <fstream>
#include <string>
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
	int i = 0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			return i;
			break;
		}
		if ((std::cin.fail()) || (i<0) || (i>a))
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
	std::cout << "\t1> Add new Student \n\t2> Delete student by number \n\t3> Write all Students\n\t4> Edit\n\t5> Go out\n\n\t";
	return(mistake());
}

int prepod_menu()
{
	std::cout << "\t1> Add new teacher \n\t2> Delete teacher by number \n\t3> Write all teachers\n\t4> Edit\n\t5> Go out\n\n\t";
	return(mistake());
}

int personal_menu()
{
	int i{ 0 };
	std::cout << "\t1> Add new worker \n\t2> Delete worker by number \n\t3> Write all workers\n\t4> Edit\n\t5> Go out\n\n\t";
	return(mistake());
}
void pust(int a)
{
	if (a == 0)
	{
		std::cout << "\n\t\t\tNULL\n";
	}
}












Keeper::Keeper(int size_s_ , int size_t_ , int size_p_)
	: size_s(size_s_),
	size_t(size_t_),
	size_p(size_p_)
{
	Student** student = new Student*;
	Prepod** prepod = new Prepod*;
	Personal** personal = new Personal*;
}

void Keeper::load()
{
	std::ifstream in("F:\\”чеба\\3 курс 1 сем тп лаба\\Veselkov Ч копи€ Ч копи€ (2)\\myfile1.txt");
	in >> size_s;
	in >> size_t;
	in >> size_p;
	student = (Student**)realloc(student, (size_s) * sizeof(Student));
	prepod = (Prepod**)realloc(prepod, (1) * sizeof(Prepod));
	personal = (Personal**)realloc(personal, (1) * sizeof(Personal));
	for (int i{ 0 }; i < size_s; i++)
	{
		student[i] = new Student;
		in.ignore(32767, '\n');
		std::getline(in, schet);
		student[i]->setfioo(schet);
		in >> ichet;
		student[i]->setgrupp(ichet);
		in.ignore(32767, '\n');
		std::getline(in, schet);
		student[i]->setspecialtyy(schet);
		in >> ichet;
		student[i]->setcoursee(ichet);
		in >> dchet;
		student[i]->setballl(dchet);
	}
	for (int i{ 0 }; i < size_t; i++)
	{
		prepod[i] = new Prepod;
		in.ignore(32767, '\n');
		std::getline(in, schet);
		prepod[i]->setfioo(schet);
		std::getline(in, schet);
		prepod[i]->setgoupss(schet);
		std::getline(in, schet);
		prepod[i]->setspecialtyss(schet);
	}
	for (int i{ 0 }; i < size_p; i++)
	{
		personal[i] = new Personal;
		std::getline(in, schet);
		personal[i]->setfioo(schet);
		std::getline(in, schet);
		personal[i]->setprofff(schet);
		std::getline(in, schet);
		personal[i]->setnumberr(schet);
		std::getline(in, schet);
		personal[i]->setotvv(schet);
	}
	in.close();
}

void Keeper::save()
{
	std::ofstream out("F:\\”чеба\\3 курс 1 сем тп лаба\\Veselkov Ч копи€ Ч копи€ (2)\\myfile1.txt");
	out << size_s << "\n";
	out << size_t << "\n";
	out << size_p << "\n";
	for (int i{ 0 }; i < size_s; i++)
	{
		out << student[i]->getfio() << "\n";
		out << student[i]->getgroup() << "\n";
		out << student[i]->getspecialty() << "\n";
		out << student[i]->getcourse() << "\n";
		out << student[i]->getball() << "\n";
	}
	for (int i{ 0 }; i < size_t; i++)
	{
		out << prepod[i]->getfio() << "\n";
		out << prepod[i]->getgroups() << "\n";
		out << prepod[i]->getspecialtys() << "\n";
	}
	for (int i{ 0 }; i < size_p; i++)
	{
		out << personal[i]->getfio() << "\n";
		out << personal[i]->getproff() << "\n";
		out << personal[i]->getnumber() << "\n";
		out << personal[i]->getotv() << "\n";
	}
	out.close();
}

void Keeper::prog()
{
	int i_switch, s_switch, t_switch, p_switch;
	std::cout << "Welcome to SUAI\n";
	while (1)
	{
		i_switch = f_menu();
		switch (i_switch)
		{
		case 1:
			while (1)
			{
				s_switch = student_menu();
				switch (s_switch)
				{
				case 1:
					if (size_s == 0)
					{
						student = (Student**)realloc(student, (1) * sizeof(Student));
					}
					else
					{
						student = (Student**)realloc(student, (size_s) * sizeof(Student));
					}
					student[size_s] = new Student;
					student[size_s]->enterStudent();
					size_s++;
					break;

				case 2:
					std::cout << "\tEnter number of Student(go out enter(-1):     \n";
					size_s1 = mistake_(size_s - 1);
					size_s2 = (size_s - size_s1) - 1;
					for (int i{ 0 }; i < size_s2; i++)
					{
						u = size_s1 + 1;
						student[size_s1] = new Student(*student[u]);
						size_s1++;
					}
					student = (Student**)realloc(student, (size_s - 1) * sizeof(Student));
					size_s--;
					break;
				case 3:
					pust(size_s);
					for (int i{ 0 }; i < size_s; i++)
					{
						std::cout << "Number of student\t" << i;
						student[i]->outStudent();
					}
					break;
				case 4:
					std::cout << "\tEnter number of Student(go out enter(-1):     \n";
					ed1 = mistake_(size_s - 1);
					if (ed1 == -1) break;
					std::cout << "\n\tSelect number of edit\n\t1.Fio\n\t2.Group\n\t3.Kyrs\n\t4.Specialty\n\t5.Middle Ball\n\t";
					ed = mistake_(5);
					if (ed == -1) break;
					switch (ed)
					{
					case 1:student[ed1]->setfio();
						break;
					case 2:student[ed1]->setgrup();
						break;
					case 3:student[ed1]->setcourse();
						break;
					case 4:student[ed1]->setspecialty();
						break;
					case 5:student[ed1]->setball();
						break;
					}
					break;
				case 5: flag = true; break;
				default: std::cout << "\n\t\t\t\tUnknown\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 2:
			while (1)
			{
				p_switch = prepod_menu();
				switch (p_switch)
				{
				case 1:
					if (size_t == 0)
					{
						prepod = (Prepod**)realloc(prepod, (1) * sizeof(Prepod));
					}
					else
					{
						prepod = (Prepod**)realloc(prepod, (size_t) * sizeof(Prepod));
					}
					prepod[size_t] = new Prepod;
					prepod[size_t]->enterPrepod();
					size_t++;
					break;

				case 2:
					std::cout << "\tEnter number of Teacher(go out enter(-1):     \n";
					size_t1 = mistake_(size_t - 1);
					size_t2 = (size_t - size_t1) - 1;
					for (int i{ 0 }; i < size_t2; i++)
					{
						u = size_t1 + 1;
						prepod[size_t1] = new Prepod(*prepod[u]);
						size_t1++;
					}
					prepod = (Prepod**)realloc(prepod, (size_t - 1) * sizeof(Prepod));
					size_t--;
					break;

				case 3:
					pust(size_t);
					for (int i{ 0 }; i < size_t; i++)
					{
						std::cout << "Number of Teacher\t" << i;
						prepod[i]->outPrepod();
					}
					break;
				case 4:
					std::cout << "\tEnter number of Prepod(go out enter(-1):     \n";
					ed1 = mistake_(size_t - 1);
					if (ed1 == -1) break;
					std::cout << "\n\tSelect number of edit\n\t1.Fio\n\t2.Groups\n\t3.Specialty\n\t";
					ed = mistake_(3);
					if (ed == -1) break;
					switch (ed)
					{
					case 1:prepod[ed1]->setfio();
						break;
					case 2:prepod[ed1]->setgoups();
						break;
					case 3:prepod[ed1]->setspecialtys();
						break;
					}
					break;

				case 5: flag = true; break;
				default: std::cout << "\n\t\t\t\tUnknown\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 3:
			while (1)
			{
				t_switch = personal_menu();
				switch (t_switch)
				{
				case 1:
					if (size_p == 0)
					{
						personal = (Personal**)realloc(personal, (1) * sizeof(Personal));
					}
					else
					{
						personal = (Personal**)realloc(personal, (size_p) * sizeof(Personal));
					}
					personal[size_p] = new Personal;
					personal[size_p]->enterPersonal();
					size_p++;
					break;
				case 2:
					std::cout << "\tEnter number of Personal(go out enter(-1):     \n";
					size_p1 = mistake_(size_p - 1);
					size_p2 = (size_p - size_p1) - 1;
					for (int i{ 0 }; i < size_p2; i++)
					{
						u = size_p1 + 1;
						personal[size_p1] = new Personal(*personal[u]);
						size_p1++;
					}
					personal = (Personal**)realloc(personal, (size_p - 1) * sizeof(Personal));
					size_p--;
					break;

				case 3:
					pust(size_p);
					for (int i{ 0 }; i < size_p; i++)
					{
						std::cout << "Number of Personal\t" << i;
						personal[i]->outPersonal();
					}
					break;
				case 4:
					std::cout << "\tEnter number of Personal(go out enter(-1):     \n";
					ed1 = mistake_(size_p - 1);
					if (ed1 == -1) break;
					std::cout << "\n\tSelect number of edit\n\t1.Fio\n\t2.Proff\n\t3.Number\n\t4.Otv\n\t";
					ed = mistake_(4);
					if (ed == -1) break;
					switch (ed)
					{
					case 1:personal[ed1]->setfio();
						break;
					case 2:personal[ed1]->setproff();
						break;
					case 3:personal[ed1]->setnumber();
						break;
					case 4:personal[ed1]->setotv();
						break;
					}
					break;
				case 5: flag = true; break;
				default: std::cout << "\n\t\t\t\tUnknown\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 4: flag = true; break;
		default: std::cout << "\n\t\t\t\tUnknown\n";
		}
		if (flag)
		{
			flag = false;
			break;
		}
	}

}


Keeper::~Keeper()
{
}
