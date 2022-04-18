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

	cout << "Скалярний добуток " << operator*(v, v1) << endl;
	cout << "Норма вектора першого " << v.NormVec() << endl;
	cout << "Норма вектора другого " << v1.NormVec() << endl;
	cout << "Вектори рівні " << Equal(v, v1) << endl;
	cout << endl;
	cin.get();
	return 0;
}