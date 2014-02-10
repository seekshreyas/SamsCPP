//fators program to return multiple values.

#include <iostream>

using namespace std;

short Factor(int n, int *pSquared, int *pCubed);

int main(){
	int num, squared, cubed;
	short error;

	cout << "Enter a number: \t";
	cin >> num ;

	error = Factor(num, &squared, &cubed);


	if (!error){
		cout << "number: \t" << num << endl;
		cout << "square: \t" << squared << endl;
		cout << "cubed:  \t" << cubed << endl;
	}else{
		cout << "Error encountered! " << endl;
	}

	return 0;
}


short Factor(int num, int *pSquared, int *pCubed){
	short sValue = 0;

	if (num >20 ){
		sValue = 1;
	}else{
		*pSquared = num * num;
		*pCubed = num * num * num;

		sValue = 0;
	}
	

	return sValue;
}
