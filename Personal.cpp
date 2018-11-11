#include "Personal.h"



Personal::Personal(std::string fio  , std::string proff  , std::string number  , std::string otv  ):
	Vyz(fio),m_proff(proff),m_number(number),m_otv(otv)
{
}
void Personal::setproff()
{
	std::cout << "Enter profession: \t";
	std::string specialty;
	std::getline(std::cin, specialty);
	m_proff = specialty;
}
void Personal::setnumber()
{
	std::cout << "Enter phone: \t";
	std::string specialty;
	std::getline(std::cin, specialty);
	m_number = specialty;
}
void Personal::setotv()
{
	std::cout << "Enter area \n\tof responsibility: \t";
	std::string specialty;
	std::getline(std::cin, specialty);
	m_otv = specialty;
}

std::string Personal::getproff()
{
	return m_proff;
}
std::string Personal::getnumber()
{
	return m_number;
}
std::string Personal::getotv()
{
	return m_otv;
}

void Personal::enterPersonal()    // vvod stydenta
{
	std::cout << "\n";
	std::cout << "\t";
	setfio();
	std::cout << "\t";
	setproff();
	std::cout << "\t";
	setnumber();
	std::cout << "\t";
	setotv();
	std::cout << "\n";
}

void Personal::outPersonal()
{
	std::cout << "\n";
	std::cout << "FIO : \t\t\t" << getfio() << "\n";
	std::cout << "Proff : \t\t" << getproff() << "\n";
	std::cout << "Number : \t\t" << getnumber() << "\n";
	std::cout << "Otv : \t\t\t" << getotv() << "\n";
	std::cout << "\n";
}

void Personal::setprofff(std::string a)
{
	m_proff = a;
}
void Personal::setnumberr(std::string a)
{
	m_number = a;
}
void Personal::setotvv(std::string a)
{
	m_otv = a;
}

Personal::~Personal()
{
}
