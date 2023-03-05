#include <stdio.h>
#include <stdlib.h>
#define size 50

int stack[size];
int top=-1;
void push( int x)
{
    if(top==size-1)
    {
        printf("|n Stack Overflow\n");
    }
    else
    {
        top=top+1;
        stack[top]=x;
    }
}
int pop()
{
    int y;
    if(top==-1)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
       y=stack[top--];
    }
}
int main()
{
   int rev=0,n,a;
   printf("\n Enter the number\n");
   scanf("%d",&n);
   while(n>0)
   {
       a=n%10;
       push(a);
       rev=(rev*10)+pop();
       n=n/10;
   }
   printf("%d",rev);
}
