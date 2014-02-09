// Reference Using Pointers
#include <iostream>

using namespace std;

void swap(int *px, int *py);

int main(){
	int x = 5, y = 10;

	swap(&x, &y);

	cout << "Main - x: " << x << " y: " << y << endl;

	return 0;
}


void swap(int *px, int *py){
	int temp = 0;

	temp = *px;
	*px = *py;
	*py = temp;

	cout << "Swap - *px: " << *px << " *py: " << *py << endl;

}