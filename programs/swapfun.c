#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
    int x,y,z;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
    swap(x,y);
}
void swap(int a,int b)
{
    int temp;
    a=temp;
    temp=b;
    b=temp;
    printf("\nthe value of x after swapping%d",a);
    printf("\nthe value of y after swapping%d",b);
}
