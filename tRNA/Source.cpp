#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char mRNA[50];
	char tRNA[50];
	printf("Enter mRNA to find tRNA : ");
	scanf_s("%s", mRNA,49);
	printf("tRNA : ");

	int i = 0;
	while (i <= 50 && mRNA[i] != '\0')
	{
		if (mRNA[i] == 'A')
		{
			printf("U");
			tRNA[i]='U';
		}
		else if (mRNA[i] == 'U')
		{
			printf("A");
			tRNA[i]='A';
		}
		else if (mRNA[i] == 'G')
		{
			printf("C");
			tRNA[i]='C';
		}
		else if (mRNA[i] == 'C')
		{
			printf("G");
			tRNA[i]='G';
		}
		i++;
	}
	printf("\n");

	int j = 0;
	while (j <= i-2)
	{
		if (tRNA[j] == 'A')
		{
			if (tRNA[j + 1] == 'U')
			{
				if (tRNA[j + 2] == 'G')
				{
					printf("\nStart \nAUG");
					j=j+2;
				}
			}
		}
		else if (tRNA[j] == 'U')
		{
			if (tRNA[j + 1] == 'A')
			{
				if (tRNA[j + 2] == 'A' || tRNA[j + 2] == 'G')
				{
					printf("\nStop");
					j=j+2;
				}
			}
			else if (tRNA[j + 1] == 'G')
			{
				if (tRNA[j + 2] == 'A')
				{
					printf("\nStop");
					j=j+2;
				}
			}
		}
		else
		{
			printf("%c%c%c", tRNA[j],tRNA[j+1],tRNA[j+2]);
			j = j + 2;
		}
		j++;
	}

	return 0;
}