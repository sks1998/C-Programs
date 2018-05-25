#include<stdio.h>
#include<conio.h>
int main()
{
int num,temp;
printf("Enter any integer:");
scanf("%d",&num);
num<<=2;
temp=num;
printf("\nThe left shifted data is:%d",temp);
return 0;
}
