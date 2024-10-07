#include <iostream>

using namespace std;

int main()
{

    bool is_admin = true;
    bool is_connected = false;

    if (is_admin && is_connected)
    {
        cout << "Welcome Admin";
    }
    else if ((is_admin || is_connected) && is_admin)
    {
        cout << "Your Welcome But You are not connected";
    }
    else if ((is_admin || is_connected) && is_connected)
    {
        cout << "Your connected But You are not admin";
    }
    else
    {
        cout << "Error ";
    }

    return 0;
}