#include <iostream>

using namespace std;

int main(){

    unsigned char i;
    unsigned short int j;

    for (i=32, j=0; j<128; i++, j++){
        cout << i << "\t | \t "<< j << (char) j << endl;
    }

}
