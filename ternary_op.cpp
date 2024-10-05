#include <iostream>

using namespace std;

int main()
{

    cout << "Enter Your Age - \n";
    int age;
    cin >> age;

    //       Condition  ?  true statement   :  false statements
    printf(age >= 18 ? " Now You can Vote" : "You can't vote right now");

    return 0;
}