//Study of "if"-"else if"-"else"
//Basic Arithmetic Calculator


#include <stdio.h>

int main()
{


    double num1;
    double num2;
    double result;
    char ch;

    printf("Enter the first number: ");
    scanf("%lf",&num1);

    printf("Enter the operator ");
    scanf(" %c",&ch);


    printf("Enter the second number: ");
    scanf("%lf",&num2);

    if(ch=='+')
    {
        result=num1+num2;
        printf("%.2f",result);
    }
    else if(ch=='-')
    {
        result=num1-num2;
         printf("%.2f",result);
    }
    else if(ch=='*')
    {
        result=num1*num2;
         printf("%.2f",result);
    }
    else if(ch=='/')
    {
        result=num1/num2;
        printf("%.2f",result);
    }
    else
    {
        printf("Invalid Operator");
    }
    
    return 0;

}
