#pragma once
#include "Vyz.h"
#include "Student.h"
#include "Prepod.h"
#include "Personal.h"
class Keeper
{
public:
	int u{ 0 };
	int size_s{ 0 }, size_s1{ 0 }, size_s2{ 0 };
	int size_t{ 0 }, size_t1{ 0 }, size_t2{ 0 };
	int size_p{ 0 }, size_p1{ 0 }, size_p2{ 0 };
	bool flag{ false };
	int ichet;
	std::string schet;
	double dchet;
	int ed;
	int ed1;
	Student** student;
	Prepod** prepod;
	Personal** personal;
public:
	Keeper(int size_s = 0,int size_t = 0, int size_p = 0);
	void load();
	void save();
	void prog();
	virtual ~Keeper();
};

