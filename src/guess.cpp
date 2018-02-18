#include "../include/guess.h"

void guess()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
    int guess {rand()%100+1};
    std::vector<int> checked(101);
    while(true)
    {
        int count {};
        for (int i=1; i!= checked.size(); ++i)
            if (checked[i] == 0)
                ++count;
        char answer {};
        if (guess!=100)
        {
            std::cout << "Is your number greater than " << guess << " ?\n";
            std::cout << "(Y)es/(N)o? ";
            std::cin >> answer;
        }
        else if (count == 2)
        {
                std::cout << "Your number is " << guess << ".\n";
                break;
        }
        if (answer == 'Y' || answer == 'y')
        {
            for (int i=0; i!=checked.size(); ++i)
                if (guess > i)
                    checked[i] = 1;
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
            for (int i=1; i!=checked.size(); ++i)
                if (guess < i)
                    checked[i] = 1;
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
