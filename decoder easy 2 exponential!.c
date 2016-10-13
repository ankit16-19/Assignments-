//exponential 2 raised to the power of user input
#include<stdio.h>
#include<math.h>
main()
{
    printf("Enter the no.:\n");
    int num;
    scanf("%d",&num);
    printf("The values tanging from that of 2(two) raised to power of 0(zero) to 2(two) raised to the power n(the no. user input)\n\n ");
    printf("------------------------------------------------------------------------------------\n");
    int i;
    for(i=1;i<=num;i++)
    {
        int x;
        x = pow(2,i);
        printf("%d,  ",x);
    }

}
