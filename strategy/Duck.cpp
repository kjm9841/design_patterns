#include "Duck.h"

#include <iostream>

using namespace std;

namespace design_patterns {
    namespace strategy {


Duck::Duck(const string& name)
    : d_duckName(name)   
{
}

void Duck::quack() {
    cout << "Quack Quack!" << endl;
};


void Duck::fly() {
    cout << "       Flyyyy        !" << endl;

}

void Duck::display() {
    cout << "Hi! This is duck " << d_duckName << "!" << endl;
}


    }
}
