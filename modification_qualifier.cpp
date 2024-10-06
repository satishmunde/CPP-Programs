#include <iostream>

using namespace std;

int main()
{

    // in  modification qualifiers it will not allow to varialble the change their value throughout the porogram

    // const
    // volatile
    // mutable

    const int num = 200;

    cout << num;

    // num = 300;   // this step is not possible because it will not  allow to update the  const variable

    return 0;
}