//demonstrate union

#include<stdio.h>
#include<string.h>
union student
{
    char name[20];
    int roll;
    char id[20];
}s={"Ankit"},q={8};

void  main()
{


    printf("Name = %s\nRoll = %d\n",s.name,q.roll);
}
