#include <iostream>
#include<string>

int main() {
	std::cout << "CALCULATOR\n";
	std::cout << "==================\n";
	std::cout << "MENU\n";
	std::cout << "-----------------------\n";
	std::cout << "1. Addition\n";
	std::cout << "2. Subtraction\n";
	std::cout << "3. Multiplication\n";
	std::cout << "4. Division\n";
	std::cout << "Please enter any option from above givem menu:";
	int menu;
	std::cin >> menu;
	std::cout << "\n";
	int addition, subtraction, multiplication, division, number1, number2;
	std::cout << "Enter number1:";
	std::cin >> number1;
	std::cout << "\n";
	std::cout <<"Enter number2:";
	std::cin >> number2;
	std::cout << "\n";
	switch (menu) {
	case 1:
		std::cout << "Addition = " << number1 + number2;
		break;
	case 2:
		std::cout << "Subtraction = " << number2 - number1;
		break;
	case 3:
		std::cout << "Multiplication = " << number1 * number2;
		break;
	case 4:
		if (number2 != 0) {
			std::cout << "Division = " << number1 / number2;
			break;
		}
		else {
			std::cout << "Number 2 : 0 is not divisible, it is undefined\n";
			break;
		}
	default:
		std::cout << "Invalid menu choosen\n ";


	}

}