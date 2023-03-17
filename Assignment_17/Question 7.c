#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
 char str [50];
 int alp,digit,schar,i;
 alp=digit=schar=i=0;
 printf("Enter the string \n");
 gets(str);
 while(str[i]!='\0')
 {
     if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        alp++;
     else if(str[i]>='0' && str[i]<='9')
        digit++;
     else
        schar++;
     i++;
 }
 printf("Number of Alphabets in string :%d \n",alp);
 printf("Number of Digit in the string :%d \n",digit);
 printf("Number of Special Character in string :%d \n",schar);
 return 0;
}
