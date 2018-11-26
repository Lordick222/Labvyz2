#include "Student.h"



Student::Student(std::string fio,
	int grup,
	std::string spec,
	int kyrs,
	double ball) : Vyz(fio),m_grup(grup),m_specialty(spec),m_course(kyrs),m_ball(ball)
{
}

Student::Student(const Student &student)
	: Vyz(student.m_fio),
	m_grup(student.m_grup),
	m_specialty(student.m_specialty),
	m_course(student.m_course),
	m_ball(student.m_ball)
{
}



void Student::setgrup()								//vvod
{
	std::cout << "Vvedite group: \t\t";
	int grup;
	while (1)
	{
		std::cin >> grup;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n\t\t\t\t";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			m_grup = grup;
			break;
		}
	}
}
void Student::setspecialty()								//vvod
{	
	std::cout << "Vvedite specialty: \t";
	std::string specialty;
	std::getline(std::cin, specialty);
	m_specialty = specialty;
}

void Student::setcourse()								//vvod
{
	std::cout << "Vvedite course: \t";
	int course;
	while (1)
	{
		std::cin >> course;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n\t\t\t\t";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			m_course = course;
			break;
		}
	}
}

void Student::setcoursee(int a)								//vvod
{
	m_course = a;
}
void Student::setgrupp(int a)
{
	m_grup = a;
}
void Student::setspecialtyy(std::string a)
{
	m_specialty = a;
}
void Student::setballl(double a)
{
	m_ball = a;

}

void Student::setball()								//vvod
{
	std::cout << "Vvedite ball: \t\t";
	double ball;
	while (1)
	{
		std::cin >> ball;
		if ((std::cin.fail())||(ball<0)||(ball>5))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n\t\t\t\t";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			m_ball = ball;
			break;
		}
	}
}
int Student::getgroup()						//vivod
{
	return m_grup;
}
std::string Student::getspecialty()					//vivod
{
	return m_specialty;
}

int Student::getcourse()
{
	return m_course;
}

double Student::getball()
{
	return m_ball;
}


void Student::enterStudent()    // vvod stydenta
{
	std::cout << "\n";
	std::cout << "\t";
	setfio();
	std::cout << "\t";
	setgrup();
	std::cout << "\t";
	setspecialty();
	std::cout << "\t";
	setcourse();
	std::cout << "\t";
	setball();
}

void Student::outStudent()
{
	std::cout << "\n";
	std::cout << "FIO : \t\t\t" << getfio() << "\n";
	std::cout << "Group : \t\t" << getgroup() << "\n";
	std::cout << "Kyrs : \t\t\t" << getcourse() << "\n";
	std::cout << "Specialty : \t\t" << getspecialty() << "\n";
	std::cout << "Middle Ball : \t\t" << getball() << "\n";
	std::cout << "\n";

}




Student::~Student()
{
}
