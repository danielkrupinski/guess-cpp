#include <guess.h>

int main()
{
    Guess guess;
    while (guess.isInProgress)
    {
        guess.ask();
        guess.answer();
    }
	return 0;
}
