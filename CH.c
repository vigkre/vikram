#include<stdio.h>
#include<string.h>
void main()
{
char num[100];
gets(num);
if(num>0)
printf("%d is Positive",num);
else if(num<0)
printf("%d is negative",num);
else
printf("%d is zero",num);
getch();
}



