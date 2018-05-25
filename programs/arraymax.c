#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,max,location;
    int *p;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Elements in the array are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    p=&a[0];
    max=a[0];
    for(i=0;i<n;i++)
{
    if(max<=*p)
    {
       max=*p;
        location = i+1;
        p++;
    }

    }
    printf("\nMaximum element in the array is: %d",max);
    printf("\n Location of elelment: %d",location);
    getch();
}
