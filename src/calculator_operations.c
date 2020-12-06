#include<calculator_operations.h>
double square(double input1)
{
    return(input1*input1);
}
double rectangle(double input1, double input2)
{
    return(input1*input2);
}
double cone(double input1,double input2)
{
    return(0.33*3.14*input1*input2*input1);
}
double cylinder(double input1,double input2)
{
    return(3.14*input1*input2*input1);
}
double BMI(double input1, double input2)
{
    if(input2>0)
    return(input1/(input2*input2));
    else if(input2<=0)
    {
    printf("enter correct details");
    return 0;
    }
}
