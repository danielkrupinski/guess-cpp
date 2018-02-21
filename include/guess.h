#ifndef GUESS_H
#define GUESS_H

#include <iostream>

namespace Guess {
    void init();
    void ask(const int&);
    char answer();
    void too_high();
    void too_low();
    void equal();
}

#endif
