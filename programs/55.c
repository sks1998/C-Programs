#include<stdio.h>
#include<conio.h>

int square(int m);
int cube(int n);

void main()
{
  int x,s,c;

  printf("\n Enter Any Number : ");
  scanf("%d",&x);

  s=square(x);
  c=cube(x);

  printf("\n Square of %d is = %d",x,s);

  printf("\n\n Cube of %d is = %d",x,c);

  getch();
}

 int square(int m)
 {
  return(m*m);
 }

 int cube(int n)
 {
   return(n*n*n);
 }
