#include "../include/guess.h"

void Guess::init()
{
    std::cout << "Think of a number between 1 and 100\n";
    std::cout << "I will try to guess it\n";
    srand(time(NULL));
}

void Guess::ask(const int& guess)
{
    std::cout << "Is your number lower or higher or equal " << guess << "?\n";
    std::cout << "(L)ower, (H)igher, (E)qual?";
}

char Guess::answer()
{
    char answer{};
    std::cin >> answer;
    return answer;
}

void Guess::guess()
{
    int guess {rand()%100+1};
    int low {0}, high {101};
    while (true)
    {
        ask(guess);
        switch (answer())
        {
            case 'L':
                high = guess;
                while(true)
                {
                    int new_guess = rand()%100+1;
                    if (new_guess < high && new_guess > low)
                    {
                        guess = new_guess;
                        break;
                    }
                }
                break;
            case 'l':
                high = guess;
                while(true)
                {
                    int new_guess = rand()%100+1;
                    if (new_guess < high && new_guess > low)
                    {
                        guess = new_guess;
                        break;
                    }
                }
                break;
            case 'H':
                low = guess;
                while(true)
                {
                    int new_guess = rand()%100+1;
                    if (new_guess > low && new_guess < high)
                    {
                        guess = new_guess;
                        break;
                    }
                }
                break;
            case 'h':
                low = guess;
                while(true)
                {
                    int new_guess = rand()%100+1;
                    if (new_guess > low && new_guess < high)
                    {
                        guess = new_guess;
                        break;
                    }
                }
                break;
            case 'E':
                std::cout << "Your number is " << guess << "!\n";
                return;
            case 'e':
                std::cout << "Your number is " << guess << "!\n";
                return;
        }
    }
}
