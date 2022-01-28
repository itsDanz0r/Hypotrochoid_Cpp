#include <iostream>
using namespace std;

class Roulette;
class Circle;
class Arm;
class Tracer;

class Roulette{
public:
    int frame = 0;
};


int main() {
    Roulette my_roulette = Roulette();
    cout << my_roulette.frame << endl;
    my_roulette.frame += 1;
    cout << my_roulette.frame;
}
