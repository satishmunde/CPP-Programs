#include <iostream>

using namespace std;

int main()
{

    int score = 2200;

    int *score_ptr = &score;

    cout << "Value of Score is " << score << endl;

    cout << "Value of Score Pointer is " << score_ptr << endl;

    int &another_score_pointer = score;

    cout << "------------------------------------------" << endl;

    another_score_pointer = 2600;

    cout << "Value of Score is " << score << endl;

    cout << "Value of Another Score Pointer is " << &another_score_pointer << endl;

    return 0;
}