#include "vector.h"
#include <iostream>
#include <sstream>
#include <string>

Vector::Vector()
{
	m = 0;
	N = 0;
}

Vector::Vector(const Vector& v)
{
	m = new int[N];
	for (int i = 0; i < N; i++)
		m[i] = v.m[i];
}

Vector::Vector(int mas[], int n)
{
	N = n;
	m = new int[n];
	for (int i = 0; i < n; i++)
		m[i] = mas[i];
}
Vector::~Vector()
{
	delete[] m;
}

ostream& operator<<(ostream& output, const Vector& a)
{
	for (int i = 0; i < a.N; i++)
		output << "vector[ " << i << " ] = " << a[i] << endl;
	output << endl;
	return output;

}
istream& operator>>(istream& input, Vector& a)
{
	cout << "N = ";
	input >> a.N;
	a.m = new int[a.N];
	for (int i = 0; i < a.N; i++)
	{
		cout << "vector[" << i << "] = "; input >> a[i];
	}
	cout << endl;
	return input;
}

Vector::operator string() const
{
	stringstream ss;
	string v;
	for (int i = 0; i < N; i++)
		ss << m[i] << " ";
	return ss.str();

}

Vector& Vector::operator = (const Vector& v)
{
	if (&v == this) return *this; // самоприсвоєння
	N = v.N;
	delete[] m;
	m = new int[N];
	for (int i = 0; i < N; i++)
		m[i] = v.m[i];
	return *this;
}

double operator * (const Vector& v1, const Vector& v2)
{
	if (v1.N == v2.N)
	{
		double result = 0;
		for (int i = 0; i < v1.N; i++)
			result += v1[i] * v2[i];
		return result;
	}
	else
	{
		return 0;
	}

}

double Vector::NormVec()
{
		double result = 0;
		double max = m[0];
		double min = m[0];
		for (int i = 0; i < N; i++)
		{
			if (m[i] > max)
				max = m[i];

			if (m[i] < min)
				min = m[i];
		}
		return 	result = abs(max - min);
}

bool Equal(const Vector& v1, const Vector& v2)
{
	if (v1.N == v2.N)
	{
		for (int i = 0; i < v1.N; i++)
			if (v1[i] != v2[i])
			{
				return false;

			}
		return true;
	}
	return 0;

}