#include "../include/guess.h"

void guess()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
    int guess {rand()%100+1};
    int guesses {};
    while(true)
    {
        ++guesses;
        char answer {};
        if (guess!=100 && guesses < 5)
        {
            std::cout << "Is your number greater than " << guess << " ?\n";
            std::cout << "(Y)es/(N)o? ";
            std::cin >> answer;
        }
        else
        {
            std::cout << "Is " << guess << " your number?\n";
            std::cout << "(Y)es/(N)o? ";
            std::cin >> answer;
            if (answer == 'Y' || answer == 'y')
            {
                std::cout << "Your number is " << guess;
                break;
            }
            //else
        }
        if (answer == 'Y' || answer == 'y')
        {
            while (true)
            {
                int random {rand()%100+1};
                if (random > guess)
                {
                    guess = random;
                    break;
                }
            }
        }
        else
        {
            while (true)
            {
                int random {rand()%100+1};
                if (random < guess)
                {
                    guess = random;
                    break;
                }
            }
        }
    }

}
