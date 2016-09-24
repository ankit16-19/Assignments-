//To find if a no. is prime
#include<stdio.h>
void main()
{
    int n,i,b,count=0;
    printf("\nEnter a no . to check if it is prime or not:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        b = n%i;
        if(b==0)
        count++;
    }
    if(count==0)
        printf("Entered no. is prime");
    else
        printf("Entered no. is not prime");
}
