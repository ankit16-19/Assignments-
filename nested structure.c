//nested structure

#include<stdio.h>
main()
{
    struct extra_details
    {
        char branch[10];
    };
    struct student
    {
        int id;
        char name[20];
        int age;
        int fee;
        struct extra_details q;
    };
    struct student s;
    printf("Enter student id(integer),name,age,fee,branch:\n");
    scanf("%d",&s.id);
    scanf("%s",s.name);
    scanf("%d %d",&s.age,&s.fee);
    scanf("%s",&s.q.branch);
    printf("\n");
    printf("ID = %d\nName = %s\nAge = %d\nFee = %d\nBranch = %s ",s.id,s.name,s.age,s.fee,s.q.branch);

}

