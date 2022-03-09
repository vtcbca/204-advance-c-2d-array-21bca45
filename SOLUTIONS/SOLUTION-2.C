/* Write a Program to Create two 3*3 Matrix and check it is diagonal or Not
Date:18/02/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],i,j,f=0;
	clrscr();
	// Logic Taking Input in First Matrix
	for(i=0;i<3;i++)  // For Rows
	{
		for(j=0;j<3;j++) // For Columns
		{
			       printf("Enter For First Elements m1[%d][%d]:",i,j);
			       scanf("%d",&m1[i][j]);
		}
	}
	clrscr();
	printf("Matrix 1\n");
    //    logic: To Print First Matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j && m1[i][j]==0)
			{
				f=1;
				break;
			}
			else if(i!=j && m1[i][j]!=0)
			{
				f=1;
				break;
			}
		 }
	}
	if(f==0)
		printf("It is a Diagonal Matrix");
	else
		printf("It is Not a Diagonal Matrix");
	getch();
}
