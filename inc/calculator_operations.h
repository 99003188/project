/**
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>


/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 + operand2
*/
double square(double input1);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 - operand2
*/
double rectangle(double input1,double input2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 * operand2
*/
double cone(double input1,double input2);


/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double cylinder(double input1,double input2);
/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double BMI(double input1,double height);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
