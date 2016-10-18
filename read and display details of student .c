//read and display imf. of a student
#include<stdio.h>
main()
{
    struct student
    {
        int id;
        char name[20];
        int age;
        int fee;
    }s;
    printf("Enter student id(integer),name,age,fee:\n");
    scanf("%d",&s.id);
    scanf("%s",&s.name);
    scanf("%d %d",&s.age,&s.fee);
    printf("\n");
    printf("ID = %d\nName = %s\nAge = %d\nFee = %d",s.id,s.name,s.age,s.fee);

}

