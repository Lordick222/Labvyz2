#pragma once
#include "Vyz.h"
class Prepod :
	public Vyz
{
private:
	std::string m_specialtys;
	std::string m_groups;

public:
	Prepod(std::string fio = "", std::string specialtys = "", std::string groups = "");
	Prepod(const Prepod &prepod);
	void setgoups();
	void setspecialtys();
	void setgoupss(std::string a);
	void setspecialtyss(std::string a);
	std::string getgroups();
	std::string getspecialtys();
	void enterPrepod();
	void outPrepod();
	virtual ~Prepod();

	


};


