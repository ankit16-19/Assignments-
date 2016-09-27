//find g.c.d
int gcd(int a,int b)
{
    int i,gcd;
    for(i=2;i<a && i<b;i++)
        {
            if(a%i==0 && b%i==0)
            {
              gcd = i;
            }
        }
        return gcd;

}
main()
{
    int a,b;
    printf("Enter 2 num. to find gcd\n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    printf("%d",gcd(a,b));
}
