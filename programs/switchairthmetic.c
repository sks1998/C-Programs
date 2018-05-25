#include<stdio.h>
#include<conio.h>
int main()
{
    int ch,a,b,add,sub,mul,div;
    printf("enter your choice:\n");

     printf("press 1 for  Addition :\n");
      printf("press 2 for Subtraction:\n");
       printf("press 3 for Multiplication:\n");
        printf("press 4 for Division:\n");
        scanf("%d",&ch);
         printf("enter value for A:");
         scanf("%d",&a);
         printf("\nenter value for B:");
         scanf("%d",&b);
        switch(ch)
        {
        case 1:
            add=a+b;
            printf("Addition Of  Two Numbers:%d",add);
            break;
        case 2:
            sub=a-b;
            printf("Subtraction Of  Two Numbers:%d",sub);
            break;
        case 3:
            mul=a*b;
            printf("Multiplication Of  Two Numbers:%d",mul);
            break;
        case 4:
            div=a/b;
            printf("Division Of  Two Numbers:%d",div);
            break;
        default:
            printf("enter correct choice");
        }
}
