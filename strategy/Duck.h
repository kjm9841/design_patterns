#ifndef DESIGN_PATTERNS_STRATEGY_DUCK
#define DESIGN_PATTERNS_STRATEGY_DUCK

#include "IDuck.h"

#include <string>

using namespace std;

namespace design_patterns {
    namespace strategy {

class Duck : public IDuck {
    public:

        Duck() = default;
        Duck(const string& name);

        virtual void quack();
        virtual void fly();
        virtual void display();

        ~Duck() = default;

    private:

    string d_duckName;

};

    }
}

#endif // DESIGN_PATTERNS_STRATEGY_IDUCK
