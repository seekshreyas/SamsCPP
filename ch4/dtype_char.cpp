#include <iostream>

using namespace std;

int main(){
    char buffer[80] = {'\0'};

    cout << "Enter a String: \t" << endl;
    cin.get(buffer, 79);

    cout << buffer << endl;

    return 0;
}
