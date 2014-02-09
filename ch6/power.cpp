//Ex-7
// Write a program to ask for power and a number and calculate the exponent.

#include <iostream>

int expo(int n, int p);

int main(){
	int power, num, answer = 1;

	std::cout << "Enter the number: \t";
	std::cin >> num;

	std::cout << "Enter power: \t";
	std::cin >> power;



	for (int i=0; i < power; i++){
		answer *= num;
	}
	
	std::cout << "Answer is: \t " << answer << "\n";

	return 0;	

}
