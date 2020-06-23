#include "pch.h"


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
