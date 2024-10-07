#include <iostream>

using namespace std;

int main()
{

    int arr1[4][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

    int arr2[4][5] = {
        {6, 7, 8, 9, 10},
        {6, 7, 8, 9, 10},
        {6, 7, 8, 9, 10},
        {6, 7, 8, 9, 10},
    };

    int add[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            add[i][k] = arr2[i][k] - arr1[i][k]; // Store the sum in add array

            cout << add[i][k] << "\t"; // Print the result
        }
        cout << endl;
    }

    return 0;
}