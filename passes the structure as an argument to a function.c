//passes the structure as an argument to a function
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    char id[20];
}s={"Rabdee",23,"b216008"},q={"chote",13,"B216013"};
void x_input(struct student hello)
{
    puts(hello.name);
    printf("%d\n",hello.roll);
    puts(hello.id);
}
void main()
{
    char x;
    scanf("%c",&x);
    system("cls");
    if (x == 's' ||  x =='S')
        x_input(s);
    else if (x == 'q' || x == 'Q' )
        x_input(q);
}
