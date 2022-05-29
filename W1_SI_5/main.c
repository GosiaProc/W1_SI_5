#include<stdio.h>
#include<string.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32 

int main()
{
	char word [100] ="";
	char word2[100]="";
	int i = 0;
	char ch;
	printf("GRACZ 1: wpisz slowo:");
	while (1)
	{
		ch = getch();
		if (ch == ENTER)
		{
			word[i] = '\0';
			break;
		}
		else if (ch == BKSP)
		{
			if (i > 0)
			{
				i--;
				printf("\b \b");

			}
		}
		else if (ch == TAB || ch == SPACE)
		{
			continue;
		}
		else
		{
			word[i] = ch;
			i++;
			printf("*");
		}
	}
	printf("\nLength:%d",i);
	
	printf("\nGRACZ 2: odgadnij slowo:\n");

	//scanf_s("%s", word2);
	gets(word2);

	int result;
	result=strcmp(word, word2);

	printf("porownanie %d\n", result);

	if (result = 1) {
		printf("\n Wygrałes");
	}
	else
	{
		printf("\n Sprobuj jeszcze raz ");
	}
	getch();

	

	return 0;

	



}