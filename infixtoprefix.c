#include<stdio.h>
struct stack
{
    char b[100];
    int  top;
}s;
void push(char c)
{
    s.top++;
    s.b[s.top]=c;
}
char pop()
{
    if(s.top==-1)
        return(0);
    if(s.b[s.top]=='(')
    {
        s.top--;
        return 0;
    }
    else
    {
        char d=s.b[s.top];
        s.top--;
        return d;
    }

}
int precedence(char c)
{
    if(c == '(')
        return 0;
    if(c == '+' || c == '-')
        return 1;
    if(c == '*' || c == '/')
        return 2;
    if(c=='^')
        return 3;
    return 0;
}
void main()
{
    char a[100];
    printf("Enter a string\n");
    gets(a);
    s.top=-1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i])||isalpha(a[i]))
            printf("%c",a[i]);
        else if(a[i]=='(')
                    push(a[i]);
        else if(a[i]==')')
        {
            while(s.b[s.top]!='(')
            printf("%c",pop());
        }
        else
        {
            while(precedence(s.b[s.top])>=precedence(a[i]))
            {
                printf("%c",pop());
            }
            push(a[i]);

        }

    }
    while(s.top!=-1)
    {
        printf("%c",pop());
    }
}
