#include <iostream>

using namespace std;

bool CorrectCard(const char* NumberCard);
void ShowCardNumber(const char NumberCard[], const int SIZE_CARD);
void CheckInput(char NumberCard[], const int SIZE_CARD);

int main()
{
	const int SIZE_CARD = 16;
	char NumberCard[SIZE_CARD + 1]{};

	CheckInput(NumberCard, SIZE_CARD);

	ShowCardNumber(NumberCard, SIZE_CARD);

	cin.clear();

	if (CorrectCard(NumberCard))
		cout << "\nAll is well with your card";
	else
		cout << "\nYou have problems with the card";

	return 0;
}
