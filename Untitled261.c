//count the no. of vowels in a string using pointer
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    printf("Enter the string to count the no. of vowels: ");
    char st[50],*ptr;
    gets(st);
    ptr=st;
    int count=0;
    while(*ptr!='\0')
    {
        if(toupper(*ptr) == 'A'||toupper(*ptr) == 'E'||toupper(*ptr) == 'I'||toupper(*ptr) == 'O'||toupper(*ptr) == 'U')
            count++;
        ptr++;
    }
    printf("\n\n----------------**---------------- \n\n");
    printf("The no. of vowels in the entered string are: \n%d",count);
}
