// class with constructors and destructors

#include <iostream>
#include "cat.h"


using namespace std;

int main(){
	cCat Frisky(5);

	Frisky.meow();

	cout << "Frisky age: \t" << Frisky.getAge() << endl;
	cout << "In 5 years it will be: \t " << endl;
	Frisky.setAge(Frisky.getAge() + 5);

	cout << Frisky.getAge() << endl;


	return 0;

}
