#include"calculator_operations.h"
#include<stdio.h>
int main()
{
    int operation;
    double input1,input2;
    double height;
    printf("Enter the operation:\n");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
        printf("enter the side:\n");
        scanf("%lf",&input1);
        printf("The area of square = %0.2lf",square(input1));
        break;
    case 2:
        printf("Enter the length and breadth:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The area of rectangle = %0.2lf",rectangle(input1,input2));
        break;
    case 3:
        printf("Enter the radius and height:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The volume of a cone = %0.2lf",cone(input1,input2));
        break;
    case 4:
        printf("Enter the radius and height:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The volume of a cone =%0.2lf",cylinder(input1,input2));
        break;
    case 5:
        printf("Enter the weight and height:\n");
        scanf("%lf%lf",&input1,&height);
        printf("The BMI is %0.2lf",BMI(input1,height));
        break;
    }
    return 0;
}
