#include <iostream>

using namespace std;

// Define a structure to store information about a person
struct Person
{
    string name;
    int age;
    float height; // in meters
    char gender;  // 'M' for Male, 'F' for Female
};

int main()
{
    // Create a variable of type 'Person'
    Person person1;

    // Assign values to person1's fields
    person1.name = "Satish Munde";
    person1.age = 22;
    person1.height = 5.6;
    person1.gender = 'M';

    // Output the details of person1
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << " years" << endl;
    cout << "Height: " << person1.height << " Feet" << endl;
    cout << "Gender: " << (person1.gender == 'M' ? "Male" : "Female") << endl;

    // Another example with a second persons
    Person person2 = {"Jane Smith", 25, 1.68, 'F'};

    // Output the details of person2
    cout << "\nName: " << person2.name << endl;
    cout << "Age: " << person2.age << " years" << endl;
    cout << "Height: " << person2.height << " meters" << endl;
    cout << "Gender: " << (person2.gender == 'M' ? "Male" : "Female") << endl;

    return 0;
}
