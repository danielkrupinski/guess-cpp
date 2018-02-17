#include "../include/guess.h"

void guess()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
    int guess {rand()%100+1};
    std::cout << "Is your number greater than " << guess << '?';
    std::cout << "(Y)es/(N)o";
}
