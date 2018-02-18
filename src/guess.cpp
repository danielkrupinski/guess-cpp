#include "../include/guess.h"

void guess()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
    int guess {rand()%100+1};
    while (true)
    {
        std::cout << "Is your number lower or higher or equal " << guess << " ?\n";
        std::cout << "(L)ower, (H)igher, (E)qual?";
        char answer{};
        std::cin >> answer;
        switch (answer)
        {
            case 'L':
                guess = rand()%(guess-1)+1;
                break;
            case 'l':
                guess = rand()%(guess-1)+1;
                break;
            case 'H':
                while(true)
                {
                    int new_guess = rand()%100+1;
                    if (guess < new_guess)
                    {
                        guess = new_guess;
                        break;
                    }
                }
                break;
            case 'h':
                while(true)
                {
                    int new_guess = rand()%100+1;
                    if (guess < new_guess)
                    {
                        guess = new_guess;
                        break;
                    }
                }
                break;
            case 'E':
                std::cout << "Your number is " << guess << " !\n";
                return;
            case 'e':
                std::cout << "Your number is " << guess << " !\n";
                return;
        }
    }
}
