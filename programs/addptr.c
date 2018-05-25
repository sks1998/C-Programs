#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,*p,*q,sum;
    printf("enter the first number =");
    scanf("%d",&a);
    printf("enter the second number =");
    scanf("%d",&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("the sum of two number ==%d",sum);


}
