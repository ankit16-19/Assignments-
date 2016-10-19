//display content of a structure by passing member of structure as argument
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    char id[20];
}s[2]={{"Rabdee",23,"b216008"},{"chote",13,"B216013"}};
void x_input(struct student hello)
{
    puts(hello.name);
    printf("%d\n",hello.roll);
    puts(hello.id);
}
void main()
{
    int x;
    scanf("%d",&x);
    system("cls");
    if (x == 0) 
        x_input(s[0]);
    else if (x == 1)
        x_input(s[1]);
}
