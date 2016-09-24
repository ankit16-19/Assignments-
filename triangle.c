//To print the triangle
#include<stdio.h>
void main()
{
    int n,i,b;
    printf("\nEnter the no. upto which you want to print the traingle(pyramid):\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(b=1;b<=i;b++)
            printf("%d",b);
        for(b=(i-1);b!=0;b--)
            printf("%d",b);
        printf("\n");
    }
}


