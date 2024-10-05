#include <iostream>

#include <cstdint>

using namespace std;

int main()
{

    cout << "Size of the int is " << sizeof(int) * 8 << endl;
    cout << "Size of the long is " << sizeof(long) * 8 << endl;

    cout << "Size of the unsigned int of 64 is " << sizeof(uint64_t) * 8 << endl;
    cout << "Size of the int 64 is " << sizeof(int64_t) * 8 << endl;

    return 0;
}