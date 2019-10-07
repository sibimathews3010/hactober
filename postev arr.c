#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int stack[20];
int top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    int n1,n2,n3,num;
    char *e;
    printf("enter the expresion::");
    scanf("%s",exp);
    e=exp;
   while(*e)
    {


            if(isalpha(*e))
        {
            printf("enter the value of %c: ",*e);
            scanf("%d",&num);

            push(num);



}


        else
        {

            n1=pop();
            n2=pop();

            switch(*e)
            {
            case '+':
                {
                    n3=n1+n2;

                    break;
                }
            case '-':
                {
                    n3=n2-n1;

                    break;
                }
            case '*':
                {
                    n3=n1*n2;
                        break;
                }

            case '/':
                {
                    n3=n2/n1;
                    break;
                }
            case '^':
                {
                    n3=pow(n2,n1);
                    break;
                }
            }
            push(n3);
        }

        e++;
    }
    printf("\ The result=%d\n\n",pop());
    return 0;

    }

