#include "../include/guess.h"

Guess::Guess()
{
    guess = rand()%100+1;
    high = 101;
    low = 0;
}
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
    if (answer == 'L' || 'l')
        too_high();
    else if (answer == 'H' || 'h')
        too_low();
    else equal();
}

void Guess::too_high()
{
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
}


void Guess::too_low()
{
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
}
void Guess::equal()
{
            std::cout << "Your number is " << guess << "!\n";
            return;
}
