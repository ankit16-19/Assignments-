//to find the biggest of 3
#include<stdio.h>
main()
{
    printf("Enter thre no. to find the biggest.\n");
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d = bigg(a,b,c);
    printf("The biggest no. is\n");
    printf("%d",d);
}
int bigg(int a,int b,int c)
{
    int big;
    big = a;
    if(b>big)
        big = b;
    if(c>big)
        big = c;
    return big;
}
