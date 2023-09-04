#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber()
{
	int Number;
	do
	{
		cout << "Enter The Number: ";
		cin >> Number;

	} while (Number < 1);

	return Number;
}

int RandomCharacter(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

char PrintSpecialCharacter()
{
	return char(45);
}

string PrintLetter(int Number)
{
	short Counter = 1;
	string Word = "";

	for (int x = 1; x <= Number; x++)
	{
		Word = "";
		Counter = 1;

		for (int i = 1; i <= 4; i++)
		{
			for (int k = 1; k <= 4; k++)
			{
				Word = Word + char(RandomCharacter(65, 90));

			}
			if (Counter < 4)
			{
				Word += PrintSpecialCharacter();
				Counter++;
			}
		}
	}
	return Word;
}

void PrintAllThings(int Number)
{
	for (int x = 1; x <= Number; x++)
	{
		cout << PrintLetter(Number) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	PrintAllThings(ReadNumber());

	return 0;
}
