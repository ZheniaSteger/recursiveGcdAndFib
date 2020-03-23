//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: To find greatest commong divisor of two numbers.
//					To find if a number is a Fibonacci number.
// ============================================================================

#include <iostream>

using namespace std;

// PROTOTYPE FUNCTIONS
int gcd(int x, int y);
bool isFib(int n, int x, int y);

// ============================================================================
// PURPOSE: Main method runs the program
int main()
{
	bool flag = false;
	int select;
	cout << "What would you like to do?" << endl;
	cout << "1. To look for fibonacci numbers." << endl;
	cout << "2. To find greatest common denominators" << endl;
	cout << "3. To Exit." << endl;

	cin >> select;

	switch (select)
	{
		case 1:
			{
			while (flag != true){
			cout << endl;
			cout << "Enter a number for Fibonacci:  (-1 to quit)" << endl;
			int number3, x = 0, y = 1;
			bool fib;
			cin >> number3;
			if(number3 < 0){
				cout << "(*Thanks – Have a good Day*)";
				flag = true;
			}



			fib = isFib(number3, x, y);
			if(fib == true)
				cout << "Yes! This is a Fibonacci number!" << endl;
			else cout << "Not a Fibonacci number" << endl;
			}
			}

		case 2:
			{
				cout << endl;
				cout << "Enter two numbers for GCD: " << endl;
				int number, number2, result;
				cin >> number >> number2;
				if(number == -1) flag = true;
				cout << "The GCD is: " << endl;
				result = gcd(number, number2);
				cout << result;
			}
	}
}

// ============================================================================
// PURPOSE: Recursively finds greatest common divisor
int gcd(int x, int y)
{
	if(y == 0)
		return x;
	else {
		return gcd(y, x%y);
	}
}

// ============================================================================
// PURPOSE: Recursively determines if a number is fibonacci
bool isFib(int n, int x, int y)
{
	if(n == x)
		return true;
	else if(n < y)
		return false;
	else return isFib(n, y, x+y);
}
