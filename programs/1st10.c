#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0;
    printf("1st 10 Natural Numbers Are:\n");
    for (i=1;i<10;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
printf("sum of the numbers are:%d",sum);
}
