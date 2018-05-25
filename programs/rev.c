#include<stdio.h>
#include<conio.h>
int main()
{

    int x,rem=0,rev=0;
    printf("enter the number you want to reverse");
    scanf("%d",&x);
    while(x != 0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    printf("after reversing the number:%d",rev);
    return 0;
}
