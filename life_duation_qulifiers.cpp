#include <iostream>

using namespace std;

int life_up(int life)
{

    return ++life;
}

int life_down(int life)
{

    return --life;
}

int main()
{
    static int life = 10;

    cout << "Your Game is starting With life " << life << endl;

    life = life_down(life);

    cout << "Your Updated Life is " << life << endl;

    life = life_up(life);

    cout << "Your Updated Life is " << life << endl;

    life = life_up(life);

    cout << "Your Updated Life is " << life << endl;

    life = life_down(life);

    cout << "Your Updated Life is " << life << endl;

    life = life_up(life);

    cout << "Your Updated Life is " << life << endl;

    life = life_down(life);

    cout << "Your Game is Finished with Life " << life << endl;

    return 0;
}