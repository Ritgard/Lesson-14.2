#include <iostream>
#include <string>
#include <Windows.h>

class Counter
{
private:
	int count;
public:
	Counter()
	{
		count = 1;
	}
	Counter(int newCount)
	{
		count = newCount;
	}
	void addCount()
	{
		count++;
	}
	void minusCount()
	{
		count--;
	}
	void showCount()
	{
		std::cout << count << std::endl;
	}
	void exitProgramm()
	{
		exit(0);
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	std::string answer{};
	std::string userAnswer{};
	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	std::getline(std::cin, answer);
	if (answer == "да")
	{
		int newCount{};
		std::cout << "Введите начальное значение счетчика: ";
		std::cin >> newCount;
		std::cin.clear();
		std::cin.ignore();
		Counter c1(newCount);
		while (true)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::getline(std::cin, userAnswer);
			if (userAnswer == "+")
			{
				c1.addCount();
			}
			else if (userAnswer == "-")
			{
				c1.minusCount();
			}
			else if (userAnswer == "=")
			{
				c1.showCount();
			}
			else if (userAnswer == "х")
			{
				c1.exitProgramm();
			}
		}
	}
	else
	{
		Counter c1;
		while (true)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			//std::cin.ignore();
			std::getline(std::cin, userAnswer);
			if (userAnswer == "+")
			{
				c1.addCount();
			}
			else if (userAnswer == "-")
			{
				c1.minusCount();
			}
			else if (userAnswer == "=")
			{
				c1.showCount();
			}
			else if (userAnswer == "х")
			{
				c1.exitProgramm();
			}
		}
	}
	

	return EXIT_SUCCESS;
}