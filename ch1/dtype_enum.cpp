//understanding enum

#include <iostream>
using namespace std;

int main(){
    enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

    Days today;

    cout << "What day is it? " << endl;
    cin >> today;

    if (today == Monday){
        cout << "Back to work" << endl;
    }

    return 0;
}
