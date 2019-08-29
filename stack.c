#include<stdio.h>
#include<stdlib.h>
int stack_operations()
{
    printf("********************\n");
    printf("* stack operations *\n");
    printf("********************\n");
    printf("1.push\n2.pop\n3.peek\n0.exit\n");
    int ch;
    scanf("%d",&ch);
    return ch;
}
int push(int *top,int n,int a[n]);
int pop(int *top,int n ,int a[n]);
int peek(int *top,int n,int a[n]);
void display(int *top,int n,int a[n]);
int main()
{ 
    int n,A=-1,*top;
    top =&A;
    printf("enter the max size of stack:");
    scanf("%d",&n);
    int a[n],e;
    while(1)
    {
        int ch=stack_operations();
        if(ch==0)
           exit(0);
        switch(ch)
        {
             case 1:push(top,n,a);
                    break;
             case 2:pop(top,n,a);
                    break;
             case 3:peek(top,n,a);
                    break;
             default:printf("wrong choice \n\n");
                    break;
        }
    }
    return 0;
}
int push(int *top,int n,int a[n])
{
    if((*top)==n-1)
    {
        printf("stack is overflow \n\n");
    }
    else{
    int e;
    (*top)++;
    printf("enter the element to be pushed :");
    scanf("%d",&e);
    a[(*top)]=e;
    printf("the elements in stack after push :\n");
    display(top,n,a);
    printf("memory remaining in stack is : %d\n\n",((n-(*top+1))));
    }
    return 0;
}
int pop(int *top,int n,int a[n])
{
    if((*top)==-1)
    {
        printf("stack is underflow\n\n");
    }
    else{
    int e=a[(*top)];
    (*top)--;
    printf("the elements in stack after pop:\n");
    display(top,n,a);
    }
    return 0;
}
int peek(int *top,int n,int a[n])
{
    if((*top)==-1)
       printf("no elements in stack\n\n");
    else
       printf("the top most element is %d\n\n",a[(*top)]);
    return 0;
}
void display(int *top,int n,int a[n])
{
    if((*top)==-1)
      printf("the stack is empty\n\n");
    else
    {
        for(int i=0;i<=(*top);i++)
           printf("%d ",a[i]);
        printf("\n");
    }
}
