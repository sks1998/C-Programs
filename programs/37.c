#include<stdio.h>
        struct student
        {
          int sub1;
          int sub2;
          int sub3;
        };
            void main()
        {
             struct student s[50];
             int i,total=0,n;
                printf("enter how many student record you want to insert:\n");
                scanf("%d",&n);
             for(i=1;i<=n;i++)
                 {
                        printf("\nEnter Marks in Three Subjects = ");
                        scanf("%d%d%d",& s[i].sub1,&s[i].sub2,&s[i].sub3);
                        total=s[i].sub1+s[i].sub2+s[i].sub3;
                        printf("\nTotal marks of s[%d] Student= %d",i,total);
                 }

         }
