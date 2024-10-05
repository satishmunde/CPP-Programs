#include <iostream>

using namespace std;

int main()
{

    try
    {
        cout << "inside the try Block" << endl;
        cout << "Perfromming some operations" << endl;

        throw 2.8;
    }
    catch (int d)
    {
        cout << "integer exception handled" << endl;
    }
    catch (float d)
    {
        cout << "float exception handled" << endl;
    }
    catch (...)
    {
        cout << "Something Went Wrong" << endl;
    }
    return 0;
}