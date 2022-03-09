/* WAP a Program to Check Vowel in Matrix */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][5];
	int c=0,i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter Name %d:",i+1);
		flushall();
		gets(name[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0,c=0;j<5;j++)

		{
			switch(name[i][j])
			{
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
					printf("%c",name[i][j]);
					c++;
					break;
			}
		}
		printf("\n Vowel in Name %d is %d\n",i+1,c);
	}
	getch();
}








