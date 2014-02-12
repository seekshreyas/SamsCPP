/* 
** ---------------------------
** CLASS :: cCat
** accessor and helper methods
** ---------------------------
*/
#include <iostream>
using namespace std;


class cCat{

	public:
		cCat(int initAge); 		//constructor
		~cCat(); 				//destructor

		int getAge() const; 			//accessor method
		void setAge(int age); 	//accessor method

		void meow();


	private:
		int itsAge;				//member variable
};



//constructor
cCat::cCat(int initAge){
	itsAge = initAge;
}


//destructor
cCat::~cCat(){
	//no action
}


//class accessor methods
int cCat::getAge() const{
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