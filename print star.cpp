// print star.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari

#include<iostream>
using namespace std;

void p(string a, int n);

int main() 
{
	int m,n;
	cout << "enter your rows: ";
	cin >> m;
	cout << "enter your columns: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\n";
		p(" *# ", m);
		
	}
}
void p(string a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a;
		
	}
}//Ali lashkari