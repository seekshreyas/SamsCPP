// array types

#include <iostream>
using namespace std;

int main(){
    enum Weekdays { Sun, Mon, Tue, Wed, Thu, Fri, Sat, daysinweek};

    int week[daysinweek] = {1, 2, 3, 4, 5, 6, 7};

    cout << "The value of tuesday is :" << week[Tue] << endl;

    return 0;
}
