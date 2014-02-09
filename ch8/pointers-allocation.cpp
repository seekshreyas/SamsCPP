//allocating, using and deleting pointers
#include <iostream>

using namespace std;

int main(){
	int localVar = 5;
	int *pLocal = &localVar; //pointer to localvar

	int *pHeap = new int;

	*pHeap = 7;

	cout << "localVar:\t" << localVar << endl;
	cout << "*pLocal:\t" << *pLocal << endl;
	cout << "*pHeap:\t" << *pHeap << endl;

	delete pHeap;

	pHeap = new int;

	*pHeap = 9;

	cout << "*pHeap:\t" << *pHeap << endl;

	delete pHeap;
	

	return 0;
}