// Reference Using Pointers
#include <iostream>

using namespace std;

void swap(int &rx, int &ry);

int main(){
	int x = 5, y = 10;

	swap(x, y);

	cout << "Main - x: " << x << " y: " << y << endl;

	return 0;
}


void swap(int &rx, int &ry){
	int temp = 0;

	temp = rx;
	rx = ry;
	ry = temp;

	cout << "Swap - rx: " << rx << " ry: " << ry << endl;

}