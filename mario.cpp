#include <iostream>
#define NUMBER_TEN 10
using namespace std;

int main()
{
	int height, option;

	cout << "Enter height pyramid. Max = " << NUMBER_TEN << endl;

	while (true)
	{
		cin >> height;
		if (!cin || height > NUMBER_TEN || height <= 0)
		{
			cout << "Incorrect input. Please re-enter: ";
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			break;
	}
	cout << "Height = " << height << endl;

	cout << "Enter option pyramid. Only 1 or 2\n";
	while (true)
	{
		cin >> option;
		if (option == 1 || option == 2)
			break;
		else
			cout << "Incorrect input. Please re-enter: ";
		cin.clear();
		while (cin.get() != '\n');
	}
	cout << "Option = " << option << endl;
	cout << "Your pyramid\n";
	if (option == 1)
	{
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < height; j++)
			{
				if (i + j >= height - 1)
					cout << "#";
				else
					cout << " ";
			}
			cout << endl;
		}
	}