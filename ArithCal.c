//Study of "if"-"else if"-"else"
//Basic Arithmetic Calculator
//see : else if.png
//refer : conditional branching.txt

#include <stdio.h>

int main()
{
/*float n1, n2;
    float ans;
    int choice;

    printf("Enter 2 numbers ");
    scanf("%f%f", &n1, &n2);

    //menu
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n Enter Choice ");

    scanf("%d", &choice);
    //now choice would be : 1, 2, 3, 4 or anything else
    //compare for equality
    //and operate accordingly

    if(choice == 1)
    {//addition
        ans = n1 + n2;
        printf("\n %f + %f = %f ", n1, n2, ans);
    }
    else if(choice == 2)
    {//subtraction
        ans = n1- n2;
        printf("\n %.2f - %.2f = %.2f ", n1, n2, ans);
    }
    else if(choice == 3)
    {//multiplication
        ans = n1 * n2;
        printf("\n %.2f * %.2f = %.2f ", n1, n2, ans);
    }
    else if(choice == 4)
    {//Division
        ans = n1 / n2;
        printf("\n %.2f / %.2f = %.2f ", n1, n2, ans);
    }
    else
    {
        printf("\n Wrong Choice");
    }
    return 0; */

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

}
