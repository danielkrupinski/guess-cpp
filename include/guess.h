#ifndef GUESS_H
#define GUESS_H

#include <iostream>

class Guess {
    private:

    public:
        Guess();
        void init();
        void ask(const int&);
        char answer();
        void too_high();
        void too_low();
        void equal();
};

#endif
