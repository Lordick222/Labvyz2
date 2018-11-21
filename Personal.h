#pragma once
#include "Vyz.h"
class Personal :
	public Vyz
{
private:
	std::string m_proff;
	std::string m_number;
	std::string m_otv;
public:
	Personal(std::string fio = "", std::string proff = "", std::string number = "", std::string otv = "");
	Personal(const Personal &personal);
	void setproff();
	void setnumber();
	void setotv();

	void setprofff(std::string a);
	void setnumberr(std::string a);
	void setotvv(std::string a);

	std::string getproff();
	std::string getnumber();
	std::string getotv();
	void enterPersonal();
	void outPersonal();
	virtual ~Personal();
};

