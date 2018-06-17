#ifndef GUESS_H
#define GUESS_H

#include <iostream>

class Guess {
private:
    int guess;
    int high{101};
    int low{0};
public:
    Guess();
    void processInput();
    void guessNext(bool);
};

#endif
