//TO reverse the digits of a no.
#include<stdio.h>
void main()
{
    int n,i;
    printf("\nEnter the no. to reverse its digits:\n");
    scanf("%d",&n);
    while(n>0)
    {
        i = n%10;
        printf("%d",i);
        n = n/10;
    }

}
