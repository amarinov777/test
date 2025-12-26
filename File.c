#include <conio.h>
#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int k, year;
	printf("введите порядковый номер дня в году, который начинается с четверга (1-365):\n");
	scanf_s("%i", &k);
	printf("введите год:\n");
	scanf_s("%i", &year);
	if (k > 365 || k < 1)
		printf("ошибка ввода");
	else
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			printf("программа работает только с невисокосными годами.");
		else
		{
			for (int y1 = 2037; y1 > 0; y1 -= 11)
			{
				int n = 0;
				n++;
				if (n % 4 == 0)
					y1 -= 6;

				switch (k % 7)
				{
				case 0:
					printf("среда");
					break;
				case 1:
					printf("четверг");
					break;
				case 2:
					printf("пятница");
					break;
				case 3:
					printf("суббота");
					break;
				case 4:
					printf("воскресенье");
					break;
				case 5:
					printf("понедельник");
					break;
				case 6:
					printf("вторник");
					break;
				default:
					printf("ошибка ввода");
				}
			}
		}
	}
	//we created a program that determines the day of the week
	_getch();
}