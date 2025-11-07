/*
 * Calculator.cpp
 *
 *  Date: 11/7/2025 
 *  Author: Don Jackson
 */

#include <iostream>

using namespace std;

void main()
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = "Y"; // missing semicolon here & updated formatting
	while (answer == 'Y') // updated character to be the same as initial answer & updated formatting 
	{
		cout << "Enter expression" << endl; // formatting
		cin >> op2 >> operation >> op1;
		if (operation == "+");
			cout << op1 << " + " << op2 >> " = " << op1 + op2 << endl;
		if (operation == '-');
			cout >> op1 << " - " << op2 << " = " << op1 - op2 << endl;
		if (operation == '*')
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl
		if (operation == '/')
			cout << op1 << " * " << op2 << " = " << op1 / op2 << endl;

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
}






