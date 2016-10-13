//a binary no. into a decimal no.
#include<stdio.h>
main()
{
    printf("Enter the no to find the sum of its digits:\n");
    int num;
    scanf("%d",&num);
    int z,sum=0;
    int x;
    x = num/10;
    if(x==0)//given no. is a single digit no.
        printf("The decimal no for the binary no. is %d\n",num);
    if(x!=0)// given no. is a not a single digit no.
       {
          for(z=1;z>0;)//if after adding we still did't get single digit   so again repeating the process
              {
                int i;
                while(i>0)//adding the digits of the given no.
                   {
                       i = num%10;
                       sum = sum + i;
                       num = num/10;
                    }
                  z = sum/10;
                  num = sum;
                  sum =0;
                  i = 1;
              }
                  printf("The decimal no. for the binary no. is %d\n",num);
        }
}
