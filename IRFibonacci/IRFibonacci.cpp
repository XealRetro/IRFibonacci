#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int  FibonacciIterative(int);
int FibonacciRecursive(int);


int main(void)
{
	int i = 0;
	cout << "Please enter a number " << endl;
	cout << "i = ";
	cin >> i;

	system("cls");

	cout << "LET'S LOOK AT THE FIBONACCI SEQUENCE..." << endl << endl;

	cout << "ELEMENT" << "\t" << "ITERATIVE" << "     " << "RECURSIVE" << endl;
	
	for (int k = 0; k <= i; k++)
	{
		cout << k << "\t" << FibonacciIterative(k) << setw(14) << FibonacciRecursive(k) << "\n" ;
	}

	

	cout << endl;

	system("pause");
	return 0;
}

int FibonacciRecursive(int n)
{
	if (n <= 0)
	{	
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else 
	{
		return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
	}
}


int FibonacciIterative(int n)
{
	int fib[] = { 0, 1, 1 };
	for (int i = 2; i <= n; i++)
	{
		fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
		
	}
	return fib[n % 3];
}

