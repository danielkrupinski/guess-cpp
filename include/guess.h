#ifndef GUESS_H
#define GUESS_H

#include <iostream>

class Guess {
public:
    Guess();
    void processInput();
    void guessNext(bool);
private:
    int guess;
    int high{101};
    int low{0};
};

#endif
