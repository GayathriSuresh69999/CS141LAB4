//Write a program to enter temperature in Celsius and convert it into Farenheit
//First include library
#include<iostream>
using namespace std;
//Include main fuction
int main()
{
float f,c; // Decleration
cout << "Enter the temperature in Farenheit:" << endl;
cin >> f;
c = ((f-32)*5)/9;
cout <<"The corresponding temperature in Celcius is" << c << endl;
return 3;
}
