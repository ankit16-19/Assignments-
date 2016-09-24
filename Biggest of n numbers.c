//Biggest of n numbers
#include<stdio.h>
void main()
{
    int n,i[50],b,big;
    printf("\nHow many numbers u want to compare.\n");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(b=0;b<n;b++)
    scanf("%d",&i[b]);
    big = i[0];
    for(b=0;b<n;b++)
    {
        if(i[b]>big)
          big = i[b];
    }
    printf("\nThe biggest no ammong them is:\n%d",big);


}
