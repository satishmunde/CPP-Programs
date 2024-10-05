#include <iostream>

using namespace std;

void say_hello()
{

    cout << "Hello Satish Munde, My Name is say_hello\n";
}

int addition(int a, int b)
{

    return a + b;
}

int main()
{

    puts("Inside a main fucntion\n");

    say_hello();

    int choice, num1, num2;

    cout << "Enter Two numbers" << endl;

    cin >> num1 >> num2;

    cout << "addition of " << num1 << " + " << num2 << " is " << addition(num1, num2);

    return 0;
}