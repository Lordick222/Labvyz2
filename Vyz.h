#pragma once
#include <string>
#include <iostream>
#include <vector>
class Vyz
{
protected:
	std::string m_fio;
public:
	Vyz(std::string fio="");

	virtual ~Vyz();
	void setfio();
	void setfioo(std::string fio);
	std::string getfio();
};

