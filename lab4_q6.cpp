//Write a c++ program to enter base and height of a triangle and findits area
//First include library
#include<iostream>
using namespace std;
//Include main function
int main()
{
cout << "Enter the baselength and height of a triangle to find its area." << endl;
int b,h,A;
cout << "The base length of the triangle is:" << endl;
cin >> b;
cout << "The height of the triangle is:" << endl;
cin >> h;
A = 0.5 * b * h;
cout << "The area of the given triangle is:" << A << endl;
return 3;
}

