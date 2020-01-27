#include<stdio.h>
int Add(int,int);
int main()

{
int a,b;


printf("%d",Add(a,b));
return 0;
}
int Add(int x,int y)
{   printf("enter two number");
    scanf("%d%d",&x,&y);
    return(x+y);


}
