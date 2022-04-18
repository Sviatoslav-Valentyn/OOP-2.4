#pragma once
#include <string>
using namespace std;

class Vector
{
private:
	int* m;
	int N;
public:

	Vector(); // конструктор за умовчанням
	Vector(const Vector&); //копіювання
	Vector(int mas[], int ); // конструктор ініціалізації
	~Vector();

	Vector& operator = (const Vector& v); // присвоєння
	int& operator [] (const int i) { return m[i]; }
	const int& operator [] (const int i) const { return m[i]; }

	operator string() const; //приведення типу – перетворення у літерний рядок
	friend ostream& operator << (ostream& out, const Vector& a); //вивід на екран
	friend istream& operator >> (istream& in, Vector& a); //введення з клавіатури


	friend double operator *(const Vector& v1, const Vector& v2); //скалярний добуток векторів
	friend bool Equal(const Vector& v1, const Vector& v2); // порівняння векторів
	double NormVec(); // обчислення норми вектора (модуль різниці максимального та мінімального елементів)
};
