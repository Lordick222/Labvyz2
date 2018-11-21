#include "Vyz.h"




Vyz::Vyz(std::string fio)
	: m_fio(fio)
{
};
Vyz::Vyz(const Vyz &vyz)
	: m_fio(vyz.m_fio)
{
};

void Vyz::setfio()								//vvod fio
{	
	std::cout << "Vvedite fio: \t\t";
	std::string fio;
	std::getline(std::cin, fio);
	m_fio = fio;
}
void Vyz::setfioo(std::string fio)
{
	m_fio = fio;
}

std::string Vyz::getfio()						//vivod fio
{
	return m_fio;
}


Vyz::~Vyz()
{
}
