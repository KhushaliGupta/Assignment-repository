# include <stdio.h>
void main()
{
    int a,b;
    printf("Enter a&b before swapping\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a&b after swapping %d%d\n",a,b);
    }