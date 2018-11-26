#pragma once
#include <string>
#include <iostream>
class Vyz
{
protected:
	std::string m_fio;
public:
	Vyz(std::string fio="");
	Vyz(const Vyz &vyz);
	virtual ~Vyz();
	void setfio();
	void setfioo(std::string fio);
	std::string getfio();
};

