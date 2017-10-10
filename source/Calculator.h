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

#ifndef CALCULATOR_H
#define CALCULATOR_H

//Super simplistic calculator implemented only using operators + and ++
//Only yields correct answers with positive integers
class Calculator
{

public:
	//Adds r to l
	//Pre: l and r are positive integers
	//Post: l and r are unchanged and the return value is the answer to l + r
	int add(int l, int r);
	//Subtracts r from l
	//Pre: l and r are positive integers and l > r
	//Post: l and r are unchanged and the return value is the answer to l - r
	int subtract(int l, int r);
	//Mutiplies l by r
	//Pre: l and r are positive integers
	//Post: l and r are unchanged and the return value is the answer to l * r
	int multiply(int l, int r);
	//Divides r into l
	//Pre: l and r are positive integers and l > r and l % r = 0 
	//Post: l and r are unchanged and the return value is the answer to l / r
	int divide(int l, int r);
	//Raises b to the e
	//Pre: b and e are positive integers and b ^ e < limits::numeric_limits<int>::max()
	//Post: b and e are unchanged and the return value is the answer to b ^ e
	int exp(int b, int e);

};

#endif