#include<stdio.h>
int sum(int a,int b);
int substact(int a,int b);
int multiplay(int a,int b);
double devision(int a,int b);

int main()
{
    int operation,fc,v1,v2;
    double fcd;
    printf("input 2 values\n");
    scanf("%d%d",&v1,&v2);
      /* telling the user to choose any type of calculator */
    printf("please choose what you want to do with your values\n");
    printf("1- Sum\n");
    printf("2- substracttion\n");
    printf("3- multiplay\n");
    printf("4- devision\n");
    scanf("%d",&operation);//input a
    switch(operation)
    {
      case 1:
        fc = sum(v1, v2);
        printf("sum of two values = %d\n",fc);
        break;

      case 2:
        fc = substact(v1, v2);
        printf("substract of two values = %d",fc);
        break;

      case 3:
        fc = multiplay(v1, v2);
        printf("multiply of two values = %d\n",fc);
        break;

      case 4:
        fcd = devision(v1, v2);
        printf("division of two values = %d\n",fc);
        break;
      default:
        printf("wrong choice\n");
    }
return 0;
}

int sum(int a,int b)
    {
    int sum=0;
    sum=a+b;
    return sum;
    }
int substact(int a,int b)
    {
    int sub=0;
    sub=a-b;
    return sub;
    }
int multiplay(int a,int b)
    {
    int mult=1;
    mult=a*b;
    return mult;
    }
double devision(int a,int b)
    {
        double  devi=1;
    devi=a/b;
    return devi;
    }
