/* Write a program to declare variables of all basic data types (int, float,
char, double) and initialize them with values. Print these values to the console.

#include<stdio.h>
int main(){
    int a=10;
    float b=10.10;
    char c='a';
    double d=10.10;
    printf("the integer value is= %d\n",a);
    printf("the float value is= %f\n",b);
    printf("the character value is= %c\n",c);
    printf("the double value is= %lf\n",d);
    return 0;
}


/*  Write a program to swap the values of two variables without using a third
variable.
Dynamic Memory Allocation
pointers & its arithmetics
*/
/*
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped values of a= %d\n",a);
    printf("the swapped values of b= %d\n",b);
    return 0;
}

*/

/* Declare and initialize a constant for the value of π. Calculate and print the
area of a circle with a given radius.

#include<stdio.h>
int main(){
    const float pi=3.14;
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    float area=pi*r*r;
    printf("The area of the circle is: %f",area);
    return 0;
}

/*  Write a program to accept a user’s age, height, and name, and display them
in a formatted output.

#include<stdio.h>
int main(){
    int age;
    float height;
    char name[20];
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Height: %f\n",height);
    return 0;
}
*/
/*Declare three variables: an integer, a floating-point number, and a character.
Accept their values from the user and print their memory sizes using the sizeof
operator.
*/
/*
#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    printf("Enter the value of int: ");
    scanf("%d", &a);
    printf("Enter the value of float: ");
    scanf("%f", &b);
    printf("Enter the value of char: ");
    scanf(" %c", &c);
    printf("The memory size of a is: %zu\n", sizeof(a));
    printf("The memory size of b is: %zu\n", sizeof(b));
    printf("The memory size of c is: %zu\n", sizeof(c));
    return 0;
}
*/
/*Write a program to print "Welcome to C Programming!" to the console. Use
single-line and multi-line comments to explain every part of the program.
#include <stdio.h> // Include the standard input/output library

// Define the main function, which is the entry point of the program
int main() {
    // Print the message "Welcome to C Programming!" to the console
    printf("Welcome to C Programming!\n");
    /* \n is a newline character
    Return 0 to indicate that the program executed successfully */
   // return 0;
//}

/* Modify a program that calculates the sum of two integers to include
comments explaining the purpose of each variable and line of code.
// This program calculates the sum of two integers

#include <stdio.h> // Include the standard input/output library

// Define the main function, which is the entry point of the program
int main() {
    // Declare two integer variables to store the input values
    int num1; // First integer variable
    int num2; // Second integer variable

    // Prompt the user to enter the first integer value
    printf("Enter the first integer: "); // Print a message to the console
    scanf("%d", &num1); // Read the user's input and store it in num1

    // Prompt the user to enter the second integer value
    printf("Enter the second integer: "); // Print a message to the console
    scanf("%d", &num2); // Read the user's input and store it in num2

    // Declare a variable to store the sum of the two integers
    int sum; // Variable to store the sum

    // Calculate the sum of the two integers
    sum = num1 + num2; // Add num1 and num2 and store the result in sum

    // Print the result to the console
    printf("The sum is: %d\n", sum); // Print the sum to the console

    // Return 0 to indicate that the program executed successfully
    return 0;
}
*/
/*Add meaningful comments to a program that converts Celsius to Fahrenheit,
making it easy to understand for a beginner

// This program converts a temperature from Celsius to Fahrenheit

#include <stdio.h> // Include the standard input/output library

// Define the main function, which is the entry point of the program
int main() {
    // Declare a variable to store the temperature in Celsius
    float celsius; // Temperature in Celsius

    // Prompt the user to enter the temperature in Celsius
    printf("Enter the temperature in Celsius: "); // Print a message to the console
    scanf("%f", &celsius); // Read the user's input and store it in celsius

    // Declare a variable to store the temperature in Fahrenheit
    float fahrenheit; // Temperature in Fahrenheit

    // Convert the temperature from Celsius to Fahrenheit using the formula:
    // Fahrenheit = (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9.0/5.0) + 32.0; // Convert Celsius to Fahrenheit

    // Print the result to the console
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit); // Print the result

    // Return 0 to indicate that the program executed successfully
    return 0;
}

Write a program that calculates the area and perimeter of a rectangle. Use
comments to explain the formula used for the calculations.
// This program calculates the area and perimeter of a rectangle

#include <stdio.h> // Include the standard input/output library

// Define the main function, which is the entry point of the program
int main() {
    // Declare variables to store the length and width of the rectangle
    float length; // Length of the rectangle
    float width; // Width of the rectangle

    // Prompt the user to enter the length and width of the rectangle
    printf("Enter the length of the rectangle: "); // Print a message to the console
    scanf("%f", &length); // Read the user's input and store it in length

    printf("Enter the width of the rectangle: "); // Print a message to the console
    scanf("%f", &width); // Read the user's input and store it in width

    // Calculate the area of the rectangle using the formula:
    // Area = Length * Width
    float area; // Variable to store the area
    area = length * width; // Calculate the area

    // Calculate the perimeter of the rectangle using the formula:
    // Perimeter = 2 * (Length + Width)
    float perimeter; // Variable to store the perimeter
    perimeter = 2 * (length + width); // Calculate the perimeter

    // Print the results to the console
    printf("Area: %.2f\n", area); // Print the area
    printf("Perimeter: %.2f\n", perimeter); // Print the perimeter

    // Return 0 to indicate that the program executed successfully
    return 0;
}

Debug the variable name and comment of the program where the
comments describe incorrect functionality
// This program calculates the product of two numbers
#include <stdio.h>
int main() {
    int a, b, product; // Declaring variables
    a = 10;
    b = 20;
    product = a * b; // multiplying the two variables
    printf("The product of two numbers is: %d", product);
    return 0;
}

Write a program to check whether a given number is positive, negative, or
zero using an if-else statement.
// Include the standard input/output library
#include <stdio.h>

// Define the main function, which is the entry point of the program
int main() {
    // Declare a variable to store the user's input
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the user's input and store it in the num variable
    scanf("%d", &num);

    // Use an if-else statement to check whether the number is positive, negative, or zero
    if (num > 0) {
        // If the number is greater than 0, print that it is positive
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        // If the number is less than 0, print that it is negative
        printf("%d is a negative number.\n", num);
    } else {
        // If the number is equal to 0, print that it is zero
        printf("%d is zero.\n", num);
    }

    // Return 0 to indicate that the program executed successfully
    return 0;
}
*/
