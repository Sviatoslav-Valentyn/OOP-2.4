#include<iostream>
#include"vector.h"
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector v;
	cin >> v;
	Vector v1;
	cin >> v1;

	cout << "��������� ������� " << operator*(v, v1) << endl;
	cout << "����� ������� ������� " << v.NormVec() << endl;
	cout << "����� ������� ������� " << v1.NormVec() << endl;
	cout << "������� ��� " << Equal(v, v1) << endl;
	cout << endl;
	cin.get();
	return 0;
}