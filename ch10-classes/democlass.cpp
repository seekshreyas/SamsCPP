// demonstrate public and private keywords in a class 

#include <iostream>

using namespace std;

//declare the Cat class
class cCat{
	
	public:
		int itsAge;
		int itsWeight;

};



int main(){
	cCat Frisky;

	Frisky.itsAge = 5;

	cout << "Age of Frisky is : \t " << Frisky.itsAge << endl; 

	return 0;
}