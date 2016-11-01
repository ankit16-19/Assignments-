//read an array of integers using DMC
#include<stdio.h>
main()
{
    int *a,size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int i;
    a = (int *)calloc(size,sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\n");
    for(i=(i-1);i>=0;i--)
    {
        printf("%d ",*(a+i));
    }

}
