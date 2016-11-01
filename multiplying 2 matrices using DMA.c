
//oye!!!!
//not saving the values of matrix 1 and 2 skipping the for loop and exiting the programme

//multiplying 2 matrices using D.M.A
#include<stdio.h>
main()
{
    int *a[10],*b[10],*c[10],row1,col1,row2,col2;
    printf("Enter the size of matrix (mxn) 1:\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter the size of matrix (mxn) 2:\n");
    scanf("%d%d",&row2,&col2);
    int i,o;
    for(i=0;i<row1;i++)
    {
        a[i]=(int *)calloc(col1,2);
    }
    for(i=0;i<row2;i++)
    {
        b[i]=(int *)calloc(col2,2);
    }
    printf("Enter the values of matrix 1 row wise:\n");
    for(i=0;i<row1;i++)
    {
        for(o=o;o<col1;o++)
            scanf("%d",(*(a+i)+o));
    }
    for(i=0;i<row1;i++)
    {
        for(o=o;o<col1;o++)
            printf("%d",*(*(a+i)+o));
    }
    printf("Enter he values of matrix 2 row wise:\n");
    for(i=0;i<row2;i++)
    {
        for(o=o;o<col2;o++)
            scanf("%d",(*(b+i)+o));
    }
    for(i=0;i<row2;i++)
    {
        for(o=o;o<col2;o++)
        printf("%d",*(*(b+i)+o));
    }







}
