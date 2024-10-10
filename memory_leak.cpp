#include <iostream>

using namespace std;

int main()
{

    int *mptr;

    mptr = new int[100];

    cout << "Memory Allocated to the Variable \n";

    cout << *mptr << endl;

    cout << &mptr << endl;
    delete[] mptr;

    cout << "Memory Deleted " << endl;

    cout << *mptr << endl;

    cout << &mptr << endl;

    return 0;
}