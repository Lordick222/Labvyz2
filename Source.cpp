#include "Vyz.h"
#include "Student.h"
#include "Prepod.h"
#include "Personal.h"
#include "Header.h"

int main()
{
	int u{ 0 };
	int size_s{ 0 }, size_s1{ 0 }, size_s2{ 0 };
	int size_t{ 0 }, size_t1{ 0 }, size_t2{ 0 };
	int size_p{ 0 }, size_p1{ 0 }, size_p2{ 0 };
	bool flag{ false };
	int ichet;
	std::string schet;
	double dchet;
	std::vector<Student*> student;
	std::vector<Prepod*> prepod;
	std::vector<Personal*> personal;
	std::ifstream in("F:\\”чеба\\3 курс 1 сем тп лаба\\Veselkov Ч копи€ Ч копи€ (2)\\myfile1.txt");
	in >> size_s;
	in >> size_t;
	in >> size_p;
	for (int i{ 0 }; i < size_s; i++)
	{
		student.push_back(new Student);
		in.ignore(32767, '\n');
		std::getline(in,schet);
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
		prepod.push_back(new Prepod);
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
		personal.push_back(new Personal);
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


	

	


	int i_switch, s_switch, t_switch, p_switch;
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
				case 1: student.push_back(new Student); student[size_s]->enterStudent(); size_s++;  break;

				case 2:	
					std::cout << "Enter number of Student:     \n";
					std::cin >> size_s1;
					std::cin.ignore(32767, '\n');
					size_s2 = (size_s - size_s1) - 1;
					for (int i{ 0 }; i < size_s2; i++)
					{ 
						u = size_s1 + 1;
						student[size_s1]->setfioo(student[u]->getfio());
						student[size_s1]->setgrupp(student[u]->getgroup());
						student[size_s1]->setspecialtyy(student[u]->getspecialty());
						student[size_s1]->setcoursee(student[u]->getcourse());
						student[size_s1]->setballl(student[u]->getball());
						size_s1++;
					}
					student.pop_back();  size_s--;
					break;
				case 3:	
					for (int i{ 0 }; i < size_s; i++)
					{ 
						std::cout << "Number of student\t" << i;
						student[i]->outStudent();
					}
					break;

				case 4: flag = true; break;
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
				case 1:prepod.push_back(new Prepod); prepod[size_t]->enterPrepod(); size_t++; break;

				case 2:
					std::cout << "Enter number of Teacher:     \n";
					std::cin >> size_t1;
					std::cin.ignore(32767, '\n');
					size_t2 = (size_t - size_t1) - 1;
					for (int i{ 0 }; i < size_t2; i++)
					{
						u = size_t1 + 1;
						prepod[size_t1]->setfioo(prepod[u]->getfio());
						prepod[size_t1]->setgoupss(prepod[u]->getgroups());
						prepod[size_t1]->setspecialtyss(prepod[u]->getspecialtys());
						size_t1++;
					}
					prepod.pop_back();  size_t--;
					break;

				case 3:
					for (int i{ 0 }; i < size_t; i++)
					{
						std::cout << "Number of Teacher\t" << i;
						prepod[i]->outPrepod();
					}
					break;

				case 4: flag = true; break;
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
				case 1:personal.push_back(new Personal); personal[size_p]->enterPersonal(); size_p++; break;

				case 2:
					std::cout << "Enter number of Personal:     \n";
					std::cin >> size_p1;
					std::cin.ignore(32767, '\n');
					size_p2 = (size_p - size_p1) - 1;
					for (int i{ 0 }; i < size_p2; i++)
					{
						u = size_p1 + 1;
						personal[size_p1]->setfioo(personal[u]->getfio());
						personal[size_p1]->setprofff(personal[u]->getproff());
						personal[size_p1]->setnumberr(personal[u]->getnumber());
						personal[size_p1]->setotvv(personal[u]->getotv());
						size_p1++;
					}
					personal.pop_back(); size_p--;
					break;

				case 3:
					for (int i{ 0 }; i < size_p; i++)
					{
						std::cout << "Number of Personal\t" << i;
						personal[i]->outPersonal();
					}
					break;

				case 4: flag = true; break;
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 4: flag = true; break;
		}
		if (flag)
		{
			flag = false;
			break;
		}
	}

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



	system("pause");
	return 0;
}