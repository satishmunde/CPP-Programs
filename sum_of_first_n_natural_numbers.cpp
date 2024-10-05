#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the Range of Natural Numbers";

    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The Sum First " << n << "  Natural Number of Sum is" << sum << endl;

    return 0;
}
