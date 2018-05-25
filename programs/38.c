#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,n;
float x,sum=0;
printf("1+x+x^2+……+x^n");
printf("\nEnter the value of x and n:");
scanf("%f%d",&x,&n);

for(i=1;i<=n;++i)
sum+=pow(x,i);
 sum++;
printf("\nSum=%f",sum);
getch();
}
