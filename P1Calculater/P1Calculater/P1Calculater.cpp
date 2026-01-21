// P1Calculater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true) {
		try {
			double Num1, Num2;
			int Operator;
			double Result;
			cout << "Enter method: 1. +, 2. -, 3. *, 4. /, 5. squre, 6. square root, 7. quit\n";
			cin >> Operator;
			if (Operator < 5 && Operator >= 1) {
				cout << "Enter first number: \n";
				cin >> Num1;
				cout << "Enter second number: \n";
				cin >> Num2;
				switch (Operator)
				{
				case 1:
					Result = Num1 + Num2;
					break;
				case 2:
					Result = Num1 - Num2;
					break;
				case 3:
					Result = Num1 * Num2;
					break;
				case 4:
					Result = Num1 / Num2;
					break;
				default:
					throw new invalid_argument("Invalid Operator: " + to_string(Operator));
				}
			}
			else if (Operator < 7 && Operator >= 5) {
				cout << "Enter first number: \n";
				cin >> Num1;
				switch (Operator) {
				case 6:
					Result = sqrt(Num1);
					break;
				case 5:
					Result = pow(Num1, 2);
					break;
				default:
					throw new invalid_argument("Invalid Operator: " + to_string(Operator));
				}
			}
			else if (Operator == 7) {
				cout << "close calculater.\n";
				break;
			}
			else {
				throw invalid_argument("Invalid Operator: " + to_string(Operator));
			}
			cout << "Result: " << Result << "\n";
		}
		catch (exception const& error) {
			cout << error.what()<< "\n";
		}
		catch (...)
		{
			std::exception_ptr p = std::current_exception();
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
