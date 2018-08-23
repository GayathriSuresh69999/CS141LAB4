// Q1.Write a program to convert enter length in centimeter and convert it into meter and kilometer
// First include library
#include<iostream>
using namespace std;
//Include main function
int main()
{
//Declare the required variables,ask for its value and print necessary things
float km,m,cm;
cout << "Convert centimeter into meter and kilometer" << endl;
cout << "Input the distance in centimeter:";
cin >> cm;
m = cm/100;
km = cm/10000;
cout << "The distance in meter is" << m << endl;
cout <<"The distance in kilometer is" << km << endl;
return 3;
}
