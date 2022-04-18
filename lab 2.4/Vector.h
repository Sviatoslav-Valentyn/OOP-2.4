#pragma once
#include <string>
using namespace std;

class Vector
{
private:
	int* m;
	int N;
public:

	Vector(); // ����������� �� ����������
	Vector(const Vector&); //���������
	Vector(int mas[], int ); // ����������� �����������
	~Vector();

	Vector& operator = (const Vector& v); // ���������
	int& operator [] (const int i) { return m[i]; }
	const int& operator [] (const int i) const { return m[i]; }

	operator string() const; //���������� ���� � ������������ � ������� �����
	friend ostream& operator << (ostream& out, const Vector& a); //���� �� �����
	friend istream& operator >> (istream& in, Vector& a); //�������� � ���������


	friend double operator *(const Vector& v1, const Vector& v2); //��������� ������� �������
	friend bool Equal(const Vector& v1, const Vector& v2); // ��������� �������
	double NormVec(); // ���������� ����� ������� (������ ������ ������������� �� ���������� ��������)
};
