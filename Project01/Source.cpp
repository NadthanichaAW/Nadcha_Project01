#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int level{};
	printf("input level : ", level);
	scanf("%d", &level);
	for (int row = 0; row <= level; row++)
	{for (int emp = 0; emp < (level - row); emp++)
		{
			printf(" ");
		}for (int star = 0; star < ((2 * row) - 1); star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}