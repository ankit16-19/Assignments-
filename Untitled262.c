//copy a string to another string using pointers
#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter a string: ");
    char st[20],*ptr,st1[20];
    gets(st);
    ptr=st;
    int i;
    for(i=0;i<strlen(st);i++)
       {
           st1[i] = *ptr;
           ptr++;
       }
    st1[i]='\0';
    printf("%s",st1);

}
