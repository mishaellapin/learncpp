#include <iostream>

using namespace std;

int main()
{
	string str = "Guess the color, try 5 times";

	const int maxAttempt = 5; // допустимое количество попыток
	
	int attempt = 0;    // номер текущей попытки
	string color = "black"; // правильный цвет

	while (attempt < maxAttempt)
	{
		attempt++;
		cout << str << endl << "Attemp " << attempt << endl;
		string value = "";
		cin >> value;

		if (value == "")
		{
			break;
		}
		
		if (value != color)
		{
			str = "You loose, please try again";
			continue;
		}

		cout << "Congratulations! You win!" << attempt << "attemps!" << endl;
		break;
	}

	system("pause");
	return 0;
 }
