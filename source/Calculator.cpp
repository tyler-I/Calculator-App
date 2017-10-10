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

#include "Calculator.h"

int Calculator::add(int l, int r)
{
	return l + r;
}

int Calculator::subtract(int l, int r)
{
	int ans = 0;

	if (l >= r)
	{
		while (ans <= l)
		{
			if (l == add(r, ans))	//Satisfies (r + ans = l) == (l - r = ans)
				break;
			ans = add(ans, 1);
		}
	}

	return ans;
}

int Calculator::multiply(int l, int r)
{
	int ans = l;

	for (int i = 1; i < r; i++)
		ans = add(ans, l);

	return ans;
}

int Calculator::divide(int l, int r)
{
	int ans = 0;

	while (l > 0)
	{
		l = subtract(l, r);
		ans = add(ans, 1);
	}

	return ans;
}

int Calculator::exp(int b, int e)
{
	int ans = b;

	for (int i = 1; i < e; i++)
		ans = multiply(ans, b);

	return ans;
}