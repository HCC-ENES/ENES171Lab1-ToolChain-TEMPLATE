cpp
#include <iostream>
#include "sensor.h"
using namespace std;

int main() {
    double V = 3.0;
    double I = 4.0;

    cout << "Power: " << computePower(V, I) << endl;
    return 0;
}
