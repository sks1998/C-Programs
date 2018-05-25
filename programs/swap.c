#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("enter two number X and Y");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping X:=%d Y:=%d",x,y);
    return 0;
}
