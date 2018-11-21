#include "Prepod.h"



Prepod::Prepod(std::string fio, std::string specialtys, std::string groups):Vyz(fio), m_specialtys(specialtys),m_groups(groups)
{
}

Prepod::Prepod(const Prepod &prepod)
	: Vyz(prepod.m_fio),
	m_specialtys(prepod.m_specialtys),
	m_groups(prepod.m_groups)
{
}


void Prepod::setgoups()
{
	std::cout << "Enter the groups \n\tled by the teacher: \t";
	std::string specialty;
	std::getline(std::cin, specialty);
	m_groups = specialty;
}
void Prepod::setspecialtys()
{
	std::cout << "Enter specialties \n\tthat are taught \n\tby a teacher: \t\t";
	std::string specialty;
	std::getline(std::cin, specialty);
	m_specialtys = specialty;
}
std::string Prepod::getgroups()
{
	return m_groups;
}
std::string Prepod::getspecialtys()
{
	return m_specialtys;
}

void Prepod::enterPrepod()
{
	std::cout << "\n";
	std::cout << "\t";
	setfio();
	std::cout << "\t";
	setgoups();
	std::cout << "\t";
	setspecialtys();
}

void Prepod::outPrepod()
{
	std::cout << "\n";
	std::cout << "FIO : \t\t\t" << getfio() << "\n";
	std::cout << "Groups : \t\t" << getgroups() << "\n";
	std::cout << "Specialty : \t\t" << getspecialtys() << "\n";
	std::cout << "\n";
}

void Prepod::setgoupss(std::string a)
{
	m_groups = a;
}
void Prepod::setspecialtyss(std::string a)
{
	m_specialtys = a;
}


Prepod::~Prepod()
{
}
