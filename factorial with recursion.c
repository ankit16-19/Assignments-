#include<stdio.h>

void printfibonacci(int);

int main()
{

    int k,n;
    int i=0,j=1,f;

    scanf("%d",&n);

    printf("%d %d ",0,1);
    printfibonacci(n);

    return 0;
}

void printfibonacci(int n){

    static int f=0,s=1,sum;

    if(n>2)
   {
         sum = f + s;
         f = s;
         s = sum;
         printf("%d ",sum);
         printfibonacci(n-1);
    }

}
