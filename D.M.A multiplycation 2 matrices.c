//multiplying 2 matrices using D.M.A
#include<stdio.h>
#include<stdlib.h>
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
        for(o=0;o<col1;o++)
            scanf("%d",(*(a+i)+o));
    }
    for(i=0;i<row1;i++)
    {
           for(o=0;o<col1;o++)
            {
                printf("%d ",*(*(a+i)+o));
            }
            printf("\n");

    }
    printf("Enter he values of matrix 2 row wise:\n");
    for(i=0;i<row2;i++)
    {
        for(o=0;o<col2;o++)
            scanf("%d",(*(b+i)+o));
    }
    for(i=0;i<row2;i++)
    {
        for(o=0;o<col2;o++)
         {
             printf("%d ",*(*(b+i)+o));
         }
         printf("\n");
    }
    for(i=0;i<row1;i++)
    {
        c[i] = (int *)calloc(col2,sizeof(int));
    }
    for(i=0;i<row1;i++)
    {
        for(o=0;o<col2;o++)
        {
            int k=0,l=0;
            while(k<col2 && l< row1)
            {*(*(c+i)+o) += (*(*(a+i)+k))*(*(*(b+l)+o));
            k++;
            l++;}
        }
   }
    printf("Multiplied  matrix is:\n");
    for(i=0;i<row1;i++)
    {
        for(o=0;o<col2;o++)
         {
             printf("%d ",*(*(c+i)+o));
         }
         printf("\n");
    }







}
