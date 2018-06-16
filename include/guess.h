#ifndef GUESS_H
#define GUESS_H

#include <iostream>

class Guess {
private:
    int guess;
    int high;
    int low;
public:
    bool in_progress;
    Guess();
    void init();
    void ask();
    void answer();
    void too_high();
    void too_low();
    void equal();
};

#endif
