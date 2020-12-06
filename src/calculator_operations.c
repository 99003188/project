#include<calculator_operations.h>
int square(int input1)
{
    return(input1*input1);
}
int rectangle(int input1, int input2)
{
    return(input1*input2);
}
double cone(int input1,int input2)
{
    return(0.33*3.14*input1*input2*input1);
}
double cylinder(int input1,int input2)
{
    return(3.14*input1*input2*input1);
}
double BMI(int input1, double height)
{
    if(height>0)
    return(input1/(height*height));
    else if(height<=0)
    {
    printf("enter correct details");
    return 0;
    }
}
