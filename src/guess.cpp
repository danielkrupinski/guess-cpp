#include "../include/guess.h"

void guess()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
    int guess {rand()%100+1};
    std::vector<bool> checked(100);
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
            else answer = 'N';
        }
        if (answer == 'Y' || answer == 'y')
        {
            for (int i=0; i!=checked.size(); ++i)
                if (guess > i)
                    checked[i] = true;
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
            for (int i=guess+1; i!=checked.size(); ++i)
                checked[i] = true;
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
