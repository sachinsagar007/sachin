#include <stdio.h>
#define MAX_SIZE 100

void removeDuplicates(char * str);

int main()
{
    char str[MAX_SIZE];

    printf("Enter any string: ");
    gets(str);

    printf("String before removing duplicates: %s\n", str);

    remove_repeater(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}

void remove_repeater(char * str)
{
    int i, j,k;
    for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
}
