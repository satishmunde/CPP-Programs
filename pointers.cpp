#include <iostream>
using namespace std;

int main()
{

    int num = 100;

    int *ptr = &num;

    cout << "pointer address is " << ptr << endl;
    cout << "pointer address value is " << *ptr << endl;
    cout << "pointer value is " << num << endl;

    return 0;
}