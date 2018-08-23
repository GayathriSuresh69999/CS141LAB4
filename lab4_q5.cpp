// Write a program to enter two angles of a triangle and find the third triangle
// First include library
#include<iostream>
using namespace std;
//Include main function
int main()
{
int a,b,c; //Decleration
cout << "Enter the two angles to fnd the third angle" << endl;
cout << "First angle of the triangle:" << endl;
cin >> a;
cout << "Second angle of the triangle:" << endl;
cin >> b;
c = 180 - (a + b);
cout << "The third angle of the triangle is:" << c << endl;
return 3;
}

