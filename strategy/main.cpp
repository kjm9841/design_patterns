#include <iostream>
#include "IDuck.h"
#include "Duck.h"

using namespace std;
using namespace design_patterns;
using namespace design_patterns::strategy;

int main() {

    cout << "Hello world!!" << endl;

    IDuck* duck = new Duck("Bob");
    
    duck->quack();
    duck->fly();
    duck->display();

    return 0;
}