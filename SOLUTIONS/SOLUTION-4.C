#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   int i,j;
   char s[5][10],b[10];
   clrscr();
   for(i=0;i<5;i++)
   {
     printf("Enter string:");
     flushall();
     gets(s[i]);
   }
    printf("Which string You want to search:");
    flushall();
    gets(b);

    for(i=0;i<5;i++)
    {
	  if(strcmp(b,s[i])==0)
	  {
	     printf("   %s is found at position:%d",s[i],i+1);
	     break;
	  }

    }
  getch();
}
