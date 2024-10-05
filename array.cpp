#include <iostream>

using namespace std;

int main()
{
    // int n;

    // cout << "Enter the size of An Array - ";
    // cin >> n;

    // cout << "Size of Your Array is " << n << endl;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter value for " << i << "th Position - ";
    //     cin >> arr[i];
    //     cout << endl;
    // }

    // cout << "Now the Getting data is complited" << endl;

    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr[i] << " Value is At Position" << i << endl;
    //     cout << endl;
    // }

    cout << "Static Arrays" << endl;

    int statarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        cout << statarray[i] << endl;
    }
    return 0;
}