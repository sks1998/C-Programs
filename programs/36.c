#include<stdio.h>
#include<conio.h>
void main()
{
long int p;
int n;
double q;
printf("------------------------------------------------------------");
printf(" 2 to power n n 2 to power -n");
printf("------------------------------------------------------------");
p=1;
for(n=0; n<21; ++n)
{
if(n==0)
p=1;
else
p=p*2;
q=1.0/(double)p;
printf("10l%d 10%d\n %20.12lf", p,n,q);
}
printf("---------------------------------------------");
}
