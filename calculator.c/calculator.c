#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void substraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void square();
void cube();
void squareroot();

int main()
{
    int op;
    printf("\t\tWelcome to Scientific Calculator\n\n");
    printf("Enter 0 to Quite the program\n");
    printf("Enter 1 FOr Addition : \n");
    printf("Enter 2 FOr Substraction : \n");
    printf("Enter 3 FOr Multiplication : \n");
    printf("Enter 4 FOr Division : \n");
    printf("Enter 5 FOr Modulus : \n");
    printf("Enter 6 FOr power : \n");
    printf("Enter 7 FOr Factorial : \n");
    printf("Enter 8 FOr Square: \n");
    printf("Enter 9 FOr Cube : \n");
    printf("Enter 10 FOr SquareRoot : \n\n");
    printf("Enter the number from 1-10: \n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
       addition();
        break;
    case 2:
       substraction();
        break;
    case 3:
       multiplication();
        break;
    case 4:
       division();
        break;
    case 5:
       modulus();
        break;
    case 6:
       power();
        break;
    case 7:
       factorial();
        break;
    case 8:
       square();
        break;
    case 9:
       cube();
        break;
    case 10:
       squareroot();
        break;
    case 0:
        exit(0);
    default:
        printf("*********ERROR***********");
    }
return 0;
}


void addition(){
    float a,b,c;
    printf("Enter the 2 number you want to Sum :\n");
    scanf("%f%f",&a,&b);
    printf("sum is %.1f:",a+b);
}
void substraction(){
    float a,b,c;
    printf("Enter the 2 number you want to Substraction :\n");
    scanf("%f%f",&a,&b);
    printf("Differentiate is %.1f:",a-b);
}
void multiplication(){
    float a,b,c;
    printf("Enter the 2 number you want to Multiply :\n");
    scanf("%f%f",&a,&b);
    printf("Multiplicationis %.1f:",a*b);
}
void division(){
    float a,b,c;
    printf("Enter the 2 number you want to Divide :\n");
    scanf("%f%f",&a,&b);
    printf("Division is %.1f:",a/b);
}
void modulus(){
    int a,b,c;
    printf("Enter the 2 number you want to Modulus :\n");
    scanf("%d%d",&a,&b);
    printf("Modulus is %d:",a%b);
}
void power(){
    int i;
    float a,b,c=1;
    printf("Enter the number you want to power:\n");
    scanf("%f",&a);
    printf("Enter the power:\n");
    scanf("%f",&b);
    for(i=1;i<=b;i++)
    {
        c=c*a;
    }
    printf("Result is %.1f:",c);
}
void factorial(){
    int i;
    float a,b,c=1;
    printf("Enter the number you want to factorial :\n");
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        c=c*i;
    }

    printf("Factorial is %.1f:",c);
}
void square(){
    float a,b,c;
    printf("Enter the number you want to Square :\n");
    scanf("%f",&a);
    printf("Square is %.1f:",a*a);
}
void cube(){
    float a,b,c;
    printf("Enter the number you want to Cube :\n");
    scanf("%f",&a);
    printf("Cube is %.1f:",a*a*a);
}
void squareroot(){
    float a,b,c;
    printf("Enter the number you want to Squareroot :\n");
    scanf("%f",&a);
    c=sqrt(a);
    printf("Squareroot is %.1f:",c);
}