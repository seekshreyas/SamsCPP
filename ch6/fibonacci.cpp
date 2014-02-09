// Print Fibonacci series using recursion
#include <iostream>

int fib(int n);

int main(){
	int n, answer=0;

	std::cout << "Enter a number to find:\t ";
	std::cin >> n;

	std::cout << "\n\n-------\n";

	answer = fib(n);

	std::cout << answer << "is the " << n; 
	std::cout << "th Fibonacci Number\n";

	return 0;
}


int fib(int n){
	
	if (n < 3){
		return 1;
	}else{
		return (fib(n-2) + fib(n-1));
	}
}