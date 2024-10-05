#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << "value of i = " << i << endl;
    // }

    int statarray[10] = {1, 2, 3, 4, 45, 46, 57, 68, 79, 10};

    for (int i : statarray)
    {
        cout << i << endl;
    }

    return 0;
}