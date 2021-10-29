// kmm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include <iostream>
using namespace std;

long BMM(int a, int b);
long long KMM(int a, int b);

int main()
{
    int a , b ;
    cout << "Enter two numbers: \n";
    cout << "number 1:";
    cin >> a;
    cout << "number 2:";
    cin >> b;
    cout << "KMM of " << a << " and "<< b << " is " << KMM(a, b)<<"\n";
    cout << "It's done :)";
    return 0;
}
long BMM(int a, int b)
{
    if (b == 0)
        return a;
    return BMM(b, a % b);
}
long long KMM(int a, int b)
{
    return (a / BMM(a, b)) * b;
}
//Ali lashkari