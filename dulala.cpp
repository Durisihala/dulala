// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << year << "��" << month << "��" << day << "��" << endl;
}
int main()
{
	CDurisihala od(2019, 10, 11);
	od.displayDate();
    return 0;
}

