#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	Calculator calc;
	int l, r;
	char rpt = ' ';

	cout << "Enter left number: ";
	cin >> l;
	cout << endl;
	cout << "Enter right number: ";
	cin >> r;
	cout << endl;

	int optr = 0;
	do
	{
		cout << "Enter desired opperation:\n";
		cout << "\t1) Add\n\t2) Subract\n\t3) Multiply\n\t4) Divide\n\t5) Exponential" << endl;
		cin >> optr;
		switch (optr)
		{
		case 1:
			cout << l << " + " << r << " = " << calc.add(l, r) << endl;
			break;
		case 2:
			cout << l << " - " << r << " = " << calc.subtract(l, r) << endl;
			break;
		case 3:
			cout << l << " * " << r << " = " << calc.multiply(l, r) << endl;
			break;
		case 4:
			cout << l << " / " << r << " = " << calc.divide(l, r) << endl;
			break;
		case 5:
			cout << l << " ^ " << r << " = " << calc.exp(l, r) << endl;
			break;
		default:
			cout << "You done messed up A-A-Ron!!!" << endl;
			break;
		}
		cout << "Go again with same numbers? (Y or y)" << endl;
		cin >> rpt;
	} while (rpt == 'y' || rpt == 'Y');

	return 0;
}