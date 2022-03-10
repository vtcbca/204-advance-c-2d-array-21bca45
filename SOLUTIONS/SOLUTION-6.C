/* write a program to Enter 5 String and Print it in Sorting Order  */
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[5][10],temp[10];
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter string name=");
		gets(a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	// Using Sorting Method	
	for(i=0;i<5;i++)
	{
		puts(a[i]);
	}
	getch();
}

