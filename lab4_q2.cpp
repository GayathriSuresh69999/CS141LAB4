// Q2.Write a program to enter temperature in Celsius and convert it into Farenheit
// Include the library
#include<iostream>
using namespace std;
//Include main function
int main()
{
float c,f;
cout << "Enter the temperature in degree celcius:" << endl;
cin >> c;
f = ((c*9)/5)+32 ;

cout << "The corresponding temperature in Farenheit is:" << f << endl;
return 3;
}



