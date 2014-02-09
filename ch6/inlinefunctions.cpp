//demonstrating inline functions

#include <iostream>

inline int numDouble(int);

int main(){
	int givenNum, answer = 0;

	std::cout << "Enter a number: \t";
	std::cin >> givenNum;

	answer = numDouble(givenNum);

	std::cout << "Double of " << givenNum << " is " << answer << "\n";

	return 0;
}

int numDouble(int num){
	return 2*num;
}