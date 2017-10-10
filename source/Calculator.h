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