/* Write a Program to Create two 3*3 Matrix and print the Multiplication of it
Date:18/02/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],sum[3][3],i,j;
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
	// Logic Taking Input in Second Matrix
	for(i=0;i<3;i++)    // For Rows
	{
		for(j=0;j<3;j++)    //For Columns
		{
			       printf("Enter For Second Elements m2[%d][%d]:",i,j);
			       scanf("%d",&m2[i][j]);
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

	printf("Matrix 2\n");
	  //    logic: To Print Second Matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		    printf("%d\t",m2[i][j]);
		printf("\n");
	}
	//logic To Print Sum of Two Matrix
	printf("Matrix 3\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=m1[i][j]*m2[i][j]+m1[i+1][j]*m2[i+2][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

		getch();
}