// factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashakri

#include<iostream>
using namespace std;

int main()
{
	int a;
	int Factorial = 1;
	int x = 0;
	cout << "Enter number:";
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		Factorial *= i;
		if (Factorial == a)
		{
			cout << "** Yes is Factorial **\n";
			x = 1;
			system("pause");
		}
		
	}
	if (x == 0)
	{
		cout << "** Noo **";
	}
	cout << "\n";
	cout << "Nothing for share. Is done. goodbye :) \n";

}//Ali lashakri