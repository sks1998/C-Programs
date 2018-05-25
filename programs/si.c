#include<stdio.h>
#include<conio.h>
int main()
{

    int p,r,t;
    float si;
    printf("enter principal amount");
    scanf("%d",&p);
    printf("enter rate of interest");
    scanf("%d",&r);
    printf("enter time in year");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("simple interest:=%f",si);
    return 0;
}
