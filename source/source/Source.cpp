/*
*	Tyler Ingham
*	10/10/2017
*	Copywrite 2017 Tyler Ingham
*	//MIT Licnese//

*	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
*	to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
*	and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
*	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
*	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
*	DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
*	USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

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