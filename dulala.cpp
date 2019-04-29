// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CDurisihala
{
private:
	int year;
	int month;
	int day;
public:
	CDurisihala();
	CDurisihala(int y, int m, int d);
	void displayDate();
};
CDurisihala::CDurisihala()
{
	year = 2019;
	month = 10;
	day = 11;
}
CDurisihala::CDurisihala(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CDurisihala::displayDate()
{
	cout << year << "年" << month << "月" << day << "日" << endl;
}
int main()
{
	CDurisihala od(2019, 10, 11);
	od.displayDate();
    return 0;
}

