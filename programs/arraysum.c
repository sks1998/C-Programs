#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,sum=0,n,avg;
    printf("enter number of elements want to insert");
    scanf("%d",&n);
    printf("enter the elements of array =\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("elements of array are =\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("sum of elements of array =%d",sum);
    printf("\naverage of eelments =%d",avg);
}
