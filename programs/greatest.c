#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z,gr;
    printf("enter the first number:");
    scanf("%d",&x);
    printf("enter the second number:");
    scanf("%d",&y);
    printf("enter the third number:");
    scanf("%d",&z);
    gr=(x>y&&x>z?x:y>z?y:z);
    printf("greatest number:=%d",gr);
    return 0;
}
