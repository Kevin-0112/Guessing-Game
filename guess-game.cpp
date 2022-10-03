#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int m, guess;
	printf("Please input the range of the guessing: ");
	scanf("%d", &m);
	int r = rand()%m + 1;
	while (~scanf("%d", &guess)) {
		if (guess == r) { puts("You are right!"); break; }
		if (guess > r) puts("Your guessing number is bigger than the target.");
		if (guess < r) puts("Your guessing number is smaller than the target.");
	}
	return 0;
}
