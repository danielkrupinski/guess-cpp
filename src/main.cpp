#include "../include/guess.h"

int main()
{
    Guess* guess = new Guess;
    while (guess->in_progress)
    {
        guess->ask();
        guess->answer();
    }
    delete guess;
	return 0;
}
