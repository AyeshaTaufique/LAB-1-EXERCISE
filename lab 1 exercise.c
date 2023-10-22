#include <stdio.h>
#include <stdlib.h>
//Write a C program that accepts an employee's ID, total worked hours in a month and
//the amount received per hour. Print the ID and salary (with two decimal places) of the
//employee for a particular month.
//2. Write a C program that takes the height and width of a rectangle as an input from user
//and compute the perimeter and area of a rectangle.
//Write a C program to accept the height of a person in centimeters and categorize the
//person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
//Height>=165cm – Tall).

//
//Q1
int main(){
    int id;
    float h, am;
    am =1000;
    printf("Enter the employees id: ");
    scanf("%d", &id);
    printf("Enter the total hours worked in a month: ");
    scanf("%f",&h);
    printf("Enter the amount received per hour: ");
    scanf("%f",&am);
    printf("The salary of %d", id);
    printf("is %.2f\n", am*h);

    //Q2

    float l,br;
    printf("Enter the length:");
    scanf("%f",&l);
    printf("Enter the breath: ");
    scanf("%f", &br);
    printf("The area of rectangle: %.1f\n", l*br);
    printf("The perimeter of rectangle: %.1f\n", 2*(l+br));

    //Q3

    float height;
    printf("Enter the height of person in cm :");
    scanf("%f",&height);
    if (height<150){
        printf("Dwarf\n");
    }else if (height==150){
        printf("Average\n");
        }else if (height >= 165){
            printf("Tall\n");
            }

    //Q4
    int Binary (deci){
        int dec = deci, bin=0, rem=0, place=1;
        printf("The binary equivalent of %d is: ",dec);
        while (deci) {
                rem=deci%2;
                deci=deci/2;
                bin=bin + (rem*place);
                place=place*10;
        }
        printf("%d\n",bin);
        return bin;
    }

    int decimal;
    printf("Enter a decimal number:");
    scanf("%d", &decimal);
    Binary (decimal);

    //Q5
    int fab(a,b,num){
        int x=a,y=b,z,n=num;
        if (n==0){
            return 0;
        }else{
            z=x+y;
            printf("%d ",z);
            return fab(y,z,n-1);
            }
    }
    int a=0,b=1,num;
    printf("FIBONACCI SERIES PRINTER\nEnter nth term of fibonacci series:  ");
    scanf("%d",&num);
    printf("1 ");
    fab(a,b,num);
    return 0;
}





