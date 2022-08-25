#ifndef DESIGN_PATTERNS_STRATEGY_IDUCK
#define DESIGN_PATTERNS_STRATEGY_IDUCK

#include <string>

using namespace std;

namespace design_patterns {
    namespace strategy {

class IDuck {
    public:

        IDuck() = default;

        virtual void quack() = 0;
        virtual void fly() = 0;
        virtual void display() = 0;

        ~IDuck() = default;

};

    }
}

#endif // DESIGN_PATTERNS_STRATEGY_IDUCK
