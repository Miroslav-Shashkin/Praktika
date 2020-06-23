#include "pch.h"

int main()
{
	setlocale(LC_CTYPE, "rus");
	int Ax, Ay, Bx, By;
	char mas[N][N] = { '0' };


	printf("Введите координаты клетки на которую хотите разместить ферзя\n");
	for (;;)
	{
		scanf_s("%i%i", &Ax, &Ay);
		if (Ax >= 8 || Ay < 0 || Ax < 0 || Ay >= 8)
			printf("Input correct cord.\n");
		else break;
	}

	printf("Введите координаты клетки на которую хотите разместить фигуру на проверку\n");
	for (;;)
	{
		scanf_s("%i%i", &Bx, &By);
		if (Bx >= 8 || By < 0 || Bx < 0 || By >= 8)
			printf("Input correct cord.\n");
		else break;
	}
	// F-ферзь , X-любая фигура
	mas[Ax][Ay] = 'F';
	mas[Bx][By] = 'X';

	return (check(mas, Ax, Ay, Bx, By));
}

