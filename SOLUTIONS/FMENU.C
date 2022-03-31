/* Write a Menudriven Program Using Function for Following:
1.Prime Number
2.Palindrome Number
3.Reverse Number
4.Print Even Number upto n Number
5.Exit
*/
#include<stdio.h>
#include<conio.h>
void prime();
void palindrome();
void reverse();
void even();
int menu();
void main()
{
	int x,y,z,r;
	char yn;
	clrscr();
	do
	{
		z=menu();
		switch(z)
		{
			case 1:
				prime();
				break;

			case 2:
				palindrome();
				break;

			case 3:
				reverse();
				break;

			case 4:
				even();
				break;

			case 5: exit(0);

			default:
				printf("Please,Enter Valid Number:");
				break;
		}
		printf("\n\t Do You want To Continue?(yes-Y/y,no-N/n:");
		flushall();
		scanf("%c",&yn);
	}while(yn=='Y'|| yn=='y');
       getch();
}
int menu()
{
	int choice;
	printf("\n Menu");
	printf("\n1.Prime Number\n 2.Palindrome Number\n 3.Reverse Number\n 4. Print Even Number upto N Number\n 5.Exit\n");
	printf("Enter Number:");
	scanf("%d",&choice);
	return choice;
}
void prime()
{
	int a,count=0,i;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			 count++;
		}
	}
	if(count==2)
	printf("\n It is a Prime Number");
	else
	printf("\n It is not a Prime Number");
}
void palindrome()
{
	int a,b,c=0,d;
	clrscr();
	printf("Enter Value:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		d=a%10;
		c=d+(c*10);
		a=a/10;
	}
	if(b==c)
	printf("\n %d It is Palindrome Number",c);
	else
	printf("%d It is not a Palindrome Number",c);
}
void reverse()
{
	int a,i;
	clrscr();
	printf("Enter Any Number:");
	scanf("%d",&a);
	while(a>0)
	{
		i=a%10;
		printf("%d",i);
		a=a/10;
	}
}
void even()
{
	int a,b,i;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	  }
}
