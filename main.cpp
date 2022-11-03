#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
    const short minValue = 1;
    const short maxValue = 6;


    srand(time(0));

    short die1 = (rand() % (minValue - maxValue + 1)) + minValue;
    short die2 = (rand() % (minValue - maxValue + 1)) + minValue;

    cout << die1 << " , " << die2;

    return 0;
}
