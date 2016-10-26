//read and display details of a student using pointer structure
  struct student
  {
      char ID[10],name[10],branch[10];
  };
getdata()
{
    struct student std, *ptr;
    ptr = &std;
    printf("Enter the ID of the student: ");
    gets(ptr->ID);
    printf("Enter the Name of the student: ");
    gets(ptr->name);
    printf("Enter the Branch of the student: ");
    gets(ptr->branch);
}
printdata()
{

    struct student std, *ptr;
    ptr = &std;
    puts(ptr->ID);
    puts(ptr->name);
    puts(ptr->branch);
}
main()
{
    getdata();
    printdata();
}
