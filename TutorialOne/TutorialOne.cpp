// TutorialOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int addition(int a, int b) {

	int c;
	c = a + b;
	return c;
}

int multipication(int a, int b) {

	int d;
	d = a * b;
	return d;

}

int division(int a, int b) {
	int e;
	e = a / b;
	return e;
}

int main()
{
	int added;
	int a, b, c, d, e;
	int multi;
	int divi;

	cout << "Hello world" << std::endl;
	cout << "Enter two integers" << std::endl;
	cin >> a >> b;
	
	c = a + b;
	d = a * b;
	e = a / b;

	added = addition(a, b);
	multi = multipication(a, b);
	divi = division(a, b);

	cout << "the addition of entered intergers = " << added << endl;
	cout << "the multiplication of entered intergers = " << multi << endl;
	cout << "the division of entered intergers = " << divi << endl;

	

    return 0;
}