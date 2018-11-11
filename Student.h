#pragma once
#include "Vyz.h"

class Student :
	public Vyz
{
private:
	int m_grup;
	std::string m_specialty;
	int m_course;
	double m_ball;
public:
	Student(std::string fio="",int grup=0, std::string spec ="", int kyrs=0, double ball=0.0);
	virtual ~Student();

	void setgrup();				//setteri
	void setspecialty();
	void setcourse();
	void setball();

	void setcoursee(int a);
	void setgrupp(int a);				//setteri
	void setspecialtyy(std::string a);
	void setballl(double a);

	int getgroup();						//getteri
	std::string getspecialty();
	int getcourse();
	double getball();
	void enterStudent();
	void outStudent();
};

