#include <iostream>

using namespace std;

int main()
{

    int num1 = 6;

    int num2 = 7;

    cout << "This is the op of Bitwise And Operator \t ";
    cout << (num1 & num2) << endl;

    cout << "This is the op of Bitwise OR Operator \t";

    cout << (num1 | num2) << endl;

    cout << "This is the op of Bitwise XOR Operator \t";
    cout << (num1 ^ num2) << endl;

    cout << "This is the op of Bitwise NOT Operator \t";
    cout << (~num2) << endl;

    cout << "This is the op of Bitwise Left Shift Operator \t";
    cout << (num1 << 2) << endl;

    cout << "This is the op of Bitwise Right Shift Operator \t";
    cout << (num1 >> 2) << endl;

    return 0;
}