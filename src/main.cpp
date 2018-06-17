#include <guess.h>

int main()
{
    Guess guess;
    while (guess.in_progress)
    {
        guess.ask();
        guess.answer();
    }
	return 0;
}
