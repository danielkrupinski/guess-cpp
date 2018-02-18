#include "../include/guess.h"

void guess()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
    int guess {rand()%100+1};
    while(true)
    {
        std::cout << "Is your number greater than " << guess << " ?\n";
        std::cout << "(Y)es/(N)o? ";
        char answer {};
        std::cin >> answer;
        if (answer == 'Y' || answer == 'y')
            for (int random {rand()%100+1})
                if (random > guess)
                {
                    guess = random;
                    break;
                }
        //else
    }

}
