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