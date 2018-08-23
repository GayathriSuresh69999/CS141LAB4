//Write a program to convert days into years,weeks and days
//First include library
#include<iostream>
using namespace std;
//Include main function
int main()
{
cout << "It is arbitrarily chosen that a year has 365 days" << endl;
int d,w,y,D;
cout << "Enter the number of days to be converted into years,weeks and days" << endl;
cin >> d;
y = d/365;
w = (d%365)/7;
D = (d%365)%7;
cout << d <<"days = " << y << "years" << w << "weeks and " << D << "days";
return 4;
}
