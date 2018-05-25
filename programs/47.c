#include<stdio.h>
#include<string.h>

int main() {
   char str1[100];
   char str2[100];
    int len;
   printf("\nEnter the String 1 : ");
   gets(str1);

   strcpy(str2, str1);
   len=strlen(str2);
   printf("\nCopied String : %s", str2);
    printf("\nLength of string :%d",len);
   return (0);
}
