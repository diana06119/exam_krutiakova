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

bool CorrectCard(const char* NumberCard)
{
	int Sum = 0;
	int Size = strlen(NumberCard);
	int Parity = (Size - 1) % 2;
	char ZeroSymb[2] = "\0";

	for (int i = Size; i > 0; i--)
	{
		ZeroSymb[0] = NumberCard[i - 1];
		int Digit = atoi(ZeroSymb);

		if (Parity == i % 2)
			Digit = Digit * 2;

		Sum += Digit / 10;
		Sum += Digit % 10;
	}

	return 0 == Sum % 10;
}
