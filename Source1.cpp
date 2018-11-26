#include "Vyz.h"
#include "Student.h"
#include "Prepod.h"
#include "Personal.h"
#include "Header.h"
#include "Keeper.h"
int main()
{
	Keeper *one=new Keeper;
	one->load();
	one->prog();
	one->save();
	system("pause");
	return 0;
}
