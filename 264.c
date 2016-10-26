//swapping of two numbers using pointers
#include<stdio.h>
main()
{
    printf("Enter two no.s 'A' and 'B': ");
    int a,b,*x,*y,temp;
    scanf("%d%d",&a,&b);
    x = &a;
    y = &b;
    printf("A = %d \nB = %d\n",*x,*y);
    temp = x;
    x = y;
    y = temp;
    printf("\n---------------------\n");
    printf("A = %d \nB = %d",*x,*y);
}
