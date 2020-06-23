#include "pch.h"
#include <stdio.h>
#include <locale.h>
#define N 8

int check(char board[N][N], int Ax, int Ay, int Bx, int By);
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

int check(char board[N][N], int Ax, int Ay, int Bx, int By)
{
	int k = Ax;
	int p = Ay;

	if (Ax == Bx || Ay == By)
	{
		printf("Figure is biting enother figure\n");
		return 1;
	}


	for (Ax, Ay; Ax < N, Ay < N; Ax++, Ay++)
	{
		if (board[Ax][Ay] == 'X')
		{
			printf("Figure is biting enother figure\n");
			return 1;
		}
	}
	for (Ax, Ay; Ax >= 0, Ay >= 0; Ax--, Ay--)
	{
		if (board[Ax][Ay] == 'X')
		{
			printf("Figure is biting enother figure\n");
			return 1;
		}
	}

	Ax = k;
	Ay = p;
	for (Ax, Ay; Ax >= 0, Ay < N; Ax--, Ay++)
	{
		if (board[Ax][Ay] == 'X')
		{
			printf("Figure is biting enother figure\n");
			return 1;
		}
	}
	for (Ax, Ay; Ax < N, Ay >= 0; Ax++, Ay--)
	{
		if (board[Ax][Ay] == 'X')
		{
			printf("Figure is biting enother figure\n");
			return 1;
		}
	}
	printf("Figure isn't biting enother figure\n");
	return 0;
}
