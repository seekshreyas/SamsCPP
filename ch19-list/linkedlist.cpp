#include <list>
#include <iostream>

using namespace std;


int main(){

    list <int> listIntegers;

    listIntegers.push_front(10);
    listIntegers.push_front(2001);
    listIntegers.push_front(-1);
    listIntegers.push_front(9999);


    list <int> ::iterator elemLocator;

    for(
        elemLocator = listIntegers.begin();
        elemLocator != listIntegers.end();
        elemLocator++
        ){
        cout << *elemLocator << endl;
    }

    return 0;
}
