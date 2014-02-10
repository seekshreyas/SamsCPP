// factors code as references

#include <iostream>

using namespace std;
short Factor(int n, int &square, int &cube);

int main(){
	int n, square, cube = 0;
	short err_code = 0;

	cout << "Enter a number (1-20): \t";
	cin >> n; 

	err_code = Factor(n, square, cube);

	if (!err_code){
		cout << n << "\t" << square << "\t" << cube << "\t" << endl;
	}else{
		cout << "Error in data" << endl;
	}

	return 0;
}

short Factor(int n, int &sq, int &cu){
	short response = 0;

	if (n > 20){
		response = 1;	
	}else {
		sq = n*n;
		cu = n*n*n;

		response = 0;
	}
	
	return response;

}