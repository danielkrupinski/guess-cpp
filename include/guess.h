#ifndef GUESS_H
#define GUESS_H

#include <iostream>

class Guess {
private:
    int guess;
    int high{101};
    int low{0};
public:
    bool isInProgress{true};
    Guess();
    void init();
    void ask();
    void answer();
    void too_high();
    void too_low();
    void equal();
    void processInput();
    void guessNext();
};

#endif
