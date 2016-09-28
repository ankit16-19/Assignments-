//to find x^n
#include<stdio.h>
int pwr(int a, int b ) //a^b
{
    if (b==1)
        return a;
    else if (b==0)
        return 1;
    else
    {
        a = a*pwr(a,(b-1));
        return a ;
    }

}
void main()
{
    printf("Enter x and n to find x^n\n");
    int x,n;
    scanf("%d%d",&x,&n);
    pwr(x,n);
    printf("%d",pwr(x,n));
}

