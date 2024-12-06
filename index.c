// Write a program to display your name

#include<stdio.h>
int main()
{
    printf("My name is Ayush Shrestha\n");
    return 0;
}

//Write a program to display sum of two numbers

#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of two numbers is %d\n",sum);
    return 0;
}

//Write a program to display the product of two numbers

#include<stdio.h>
int main()
{
    int a,b,prod;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    prod=a*b;
    printf("product of two numbers is %d\n",prod);
    return 0;
}
//write a program to calculate the area of a rectangle

#include<stdio.h>
int main()
{
    float l,b,area;
    printf("Enter length\n");
    scanf("%f",&l);
    printf("Enter breadth\n");
    scanf("%f",&b);
    area=l*b;
    printf("Area of rectangle is %f\n",area);
    return 0;
}

//write a program to calculate the perimeter of a rectangle

#include<stdio.h>
int main()
{
    float l,b,peri;
    printf("Enter length\n");
    scanf("%f",&l);
    printf("Enter breadth\n");
    scanf("%f",&b);
    peri=2*(l+b);
    printf("Perimeter of rectangle is %f\n",peri);
    return 0;
}

//Write a program to convert celsius to fahrenheit

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in celsius\n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Temperature in fahrenheit is %f\n",f);
    return 0;
}

//write a program to display "Welcome to C programming"

#include<stdio.h>
int main()
{
    printf("Welcome to C programming");
    return 0;
}

//write a program to display the result of 5+3*2

#include<stdio.h>
int main()
{
    printf("%d",5+(3*2));
    return 0;
}

//write a program to calculate the average of three numbers

#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter first number\n");
    scanf("%f",&a);
    printf("Enter second number\n");
    scanf("%f",&b);
    printf("Enter third number\n");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("Average of three numbers is %f\n",avg);
    return 0;
}

//write a program to calculate the square of a number

#include<stdio.h>
int main()
{
    int a,sq;
    printf("Enter a number\n");
    scanf("%d",&a);
    sq=a*a;
    printf("Square of a number is %d\n",sq);
    return 0;
}

