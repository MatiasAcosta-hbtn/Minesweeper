#include "functions.h"

void print_tablero(int rows, int columns)
{
	int i = 0, j = 0;

	/* Print the numbers of the columns*/
	printf("     ");
	for (i = 0; i < columns * 5; i++)
	{
		if (i % 5 == 0)
		{
			if (i / 5 < 9)
				printf("\033[1;36m%d    \033[0m", (i / 5));
			else
				printf("\033[1;36m%d   \033[0m", (i / 5));
		}
		
	}
	printf("\n    ");
	/* Print top of the chess */
	for (i = 0; i < (columns * 5) - 2; i++)
		printf("-");
	printf("\n");
	/* Print the chess */
	for (i = 0; i < rows; i++)
	{
		if (i <= 9)
			printf(" \033[1;36m%d\033[0m |", i);
		else
			printf("\033[1;36m%d\033[0m |", i);
		for (j = 0; j < columns; j++)
		{
			printf(" \033[1;47m  \033[0m");
			if (j != (columns - 1))
				printf("  ");
			else
				printf("|");
			
		}
		if (i != rows - 1)
		{
			printf("\n     ");	
			for (j = 0; j < (columns * 5) - 2; j++)
				printf("-");
		}
		printf("\n");
		
	}
	printf("    ");
	for (i = 0; i < (columns * 5) - 2; i++)
		printf("-");
	printf("\n");
}

void generate_bombs(int *chess[], rows, columns)
{
	
}
