//addition of matrices
#include<stdio.h>
void main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],b,a,row1,row2,col1,col2;
    printf("\nEnter no. of rows for matrix 1:\n");
    scanf("%d",&row1);
    printf("\nEnter no. of columns for matrix 1:\n");
    scanf("%d",&col1);
    printf("\nEnter no. of rows for matrix 2:\n");
    scanf("%d",&row2);
    printf("\nEnter no. of columns for matrix 2:\n");
    scanf("%d",&col2);
    printf("\nEnter the values of matrix 1 row wise:\n");
    for(b=0;b<col1;b++)//saving matrix1 values
        for(a=0;a<row1;a++)
            scanf("%d",&mat1[b][a]);
    printf("\nEnter the values of matrix 2 row wise:\n");
    for(b=0;b<col2;b++)//savng matrix 2 values
        for(a=0;a<row2;a++)
            scanf("%d",&mat2[b][a]);
        printf("Matrix 1");
    for(b=0;b<col1;b++)//printing matrix 1
       {
        printf("\n");
        for(a=0;a<row1;a++)
        {
            printf("%d",mat1[b][a]);
            printf("\t");
        }
       }
       printf("\n");
       printf("Matrix 2");
   for(b=0;b<col1;b++)//printing matrix 2
   {
        printf("\n");
        for(a=0;a<row1;a++)
        {
            printf("%d",mat2[b][a]);
            printf("\t");
        }
   }
   printf("\nMatrx3 = Matrix1 + Matrix2");
   printf("\n\nMatrix 3");
       for(b=0;b<col1;b++)//adding matrix1 and matrix2
       {
        for(a=0;a<row1;a++)
        {
          mat3[b][a]=mat1[b][a]+mat2[b][a];
        }
       }
       for(b=0;b<col1;b++)//printing matrix3
       {
        printf("\n");
        for(a=0;a<row1;a++)
        {
            printf("%d",mat3[b][a]);
            printf("\t");
        }
       }
}
