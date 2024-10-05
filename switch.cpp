#include <iostream>

using namespace std;

int main()
{

    int choice;

    cout << "Enter your choice Between 1 to 5" << endl;
    cout << "Enter your choice 1 for Red" << endl;
    cout << "Enter your choice 2 for Green" << endl;
    cout << "Enter your choice 3 for Yellow" << endl;
    cout << "Enter your choice 4 for White" << endl;
    cout << "Enter your choice 5 for Purple" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Your Choosen Color is Red" << endl;
        break;
    case 2:
        cout << "Your Choosen Color is Green" << endl;
        break;
    case 3:
        cout << "Your Choosen Color is Yellow" << endl;
        break;
    case 4:
        cout << "Your Choosen Color is White" << endl;
        break;
    case 5:
        cout << "Your Choosen Color is Purple" << endl;
        break;
    default:
        cout << "Wrong Choice";
    }

    return 0;
}