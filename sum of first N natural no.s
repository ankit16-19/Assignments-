//sum of first N natural no.s
#include<stdio.h>
void main()
{
    int num,sum;
    float avg;
    printf("\nWrite the no. to take the avg. up to that no.\n");
    scanf("%d",&num);
    sum = (num/2)*(1+num);
    avg = (sum/num);
    printf("%f.dd",avg);
}
