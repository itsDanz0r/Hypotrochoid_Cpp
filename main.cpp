#include <iostream>
using namespace std;

class Roulette;
class Circle;
class Arm;
class Tracer;

class Roulette{
public:
    int frame = 0;
    double rotations = 10;
    int resolution[2];
    float center[2];
    Roulette(){
        resolution[0] = 3840;
        resolution[1] = 2160;
        center[0] = resolution[0] / 2;
        center[1] = resolution[1] / 2;
    }
};

int main() {
    Roulette my_roulette = Roulette();
    cout << my_roulette.frame << endl;
    my_roulette.frame += 1;
    cout << my_roulette.frame << endl;
    for (int i=0; i<2; i++) {
        cout << my_roulette.resolution[i] << ' ' << my_roulette.center[i] << endl;
    }
}

