#include <stdio.h>
int main()
{
    char str[100], ch;
  	int i, Count;
  	Count = 0;

  	printf("Enter the String:\n");
  	gets(str);

  	printf("Enter the Character to Search :");
  	scanf("%c",&ch);

  	for(i =0;i<=strlen(str);i++)
  	{
  		if(str[i]==ch)
		{
  			Count++;
 		}
	}
	printf("Number of times that charecter '%c' has Occured = %d ", ch, Count);

  	return 0;
}


