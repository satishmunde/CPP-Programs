#include <iostream>

using namespace std;

int main()
{
    enum Gender
    {
        Male,
        Female
    };

    Gender gender = Male;

    // You don't need this part if you don't want to print the integer value
    // cout << gender; // This will print 0 for Male, 1 for Female

    switch (gender)
    {
    case Male:
        cout << "Your Gender is Male" << endl; // Print "Male" as a string
        break;
    case Female:
        cout << "Your Gender is Female" << endl; // Print "Female" as a string
        break;

    default:
        break;
    }

    return 0;
}
