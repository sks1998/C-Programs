#include<stdio.h>
#include<conio.h>
int main()
{
    int  year;
    printf("enter a year to check:");
    scanf("%d",&year);
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
      else
        printf("not a leap year");
      return 0;
}
