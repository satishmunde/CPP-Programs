#include <iostream>

using namespace std;

int main()
{

    char my_string[] = "Munde";
    char my_name[] = {'S', 'a', 't', 'i', 's', 'h', 0};
    cout << "------------------------------------------------------------------------------------";
    for (int i = 0; my_string[i]; i++)
    {
        cout << my_string[i] << endl;
    }
    cout << "First Ended" << endl;
    for (char *cp = my_string; *cp != 0; cp++)
    {
        cout << *cp << endl;
    }
    cout << "Second Ended" << endl;

    for (char i : my_string)
    {
        cout << i << endl;
    }
    cout << "------------------------------------------------------------------------------------";

    for (int i = 0; my_name[i]; i++)
    {
        cout << my_name[i] << endl;
    }
    cout << "First Ended" << endl;
    for (char *cp = my_name; *cp != 0; cp++)
    {
        cout << *cp << endl;
    }
    cout << "Second Ended" << endl;
    for (char i : my_name)
    {
        cout << i << endl;
    }

    cout << "------------------------------------------------------------------------------------";

    return 0;
}