#include <iostream>

using namespace std;

int main()
{

    int choice, num1, num2;

    cout << "Enter your choice Between 1 to 5" << endl;
    cout << "Enter your choice 1 for Additon (+) " << endl;
    cout << "Enter your choice 2 for Minus (-)" << endl;
    cout << "Enter your choice 3 for Devide (/)" << endl;
    cout << "Enter your choice 4 for Multiplication (*)" << endl;
    cout << "Enter your choice 5 for Modules (%)" << endl;

    cin >> choice;

    cout << "Enter Two numbers";

    cin >> num1 >> num2;

    switch (choice)
    {
    case 1:

        cout << "Addition of your numbers is " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Substraction of your numbers is " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Devide of your numbers is " << num1 / num2 << endl;
        break;
    case 4:
        cout << "Multiplication of your numbers is " << num1 * num2 << endl;
        break;
    case 5:
        cout << "Modulues of your numbers is " << num1 % num2 << endl;
        break;
    default:
        cout << "Wrong Choice";
    }

    return 0;
}