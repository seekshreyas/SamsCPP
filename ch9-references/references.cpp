// demonstrating the use of references

#include <iostream>

int main(){

	using namespace std;

	int intOne;
	int &rSomeRef = intOne;


	intOne = 5;

	cout << "intOne:\t\t" << intOne << endl;
	cout << "rSomeRef:\t" << rSomeRef << endl;

	rSomeRef = 7;
	cout << "intOne:\t\t" << intOne << endl;
	cout << "rSomeRef:\t" << rSomeRef << endl;

	return 0;
}