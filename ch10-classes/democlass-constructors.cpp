// class with constructors and destructors

#include <iostream>

using namespace std;

class cCat{

	public:
		cCat(int initAge); 		//constructor
		~cCat(); 				//destructor

		int getAge(); 			//accessor method
		void setAge(int age); 	//accessor method

		void meow();


	private:
		int itsAge;				//member variable
};


/* 
** ---------------------------
** CLASS :: cCat
** accessor and helper methods
** ---------------------------
*/


//constructor
cCat::cCat(int initAge){
	itsAge = initAge;
}


//destructor
cCat::~cCat(){
	//no action
}


//class accessor methods
int cCat::getAge(){
	return itsAge;
}

void cCat::setAge(int age){
	itsAge = age; 
}


//class method
void cCat::meow(){
	cout << "Meow!!" << endl;
}


/* 
** ---------------------------
*/


int main(){
	cCat Frisky(5);

	Frisky.meow();

	cout << "Frisky age: \t" << Frisky.getAge() << endl;
	cout << "In 5 years it will be: \t " << endl;
	Frisky.setAge(Frisky.getAge() + 5);

	cout << Frisky.getAge() << endl;


	return 0;

}