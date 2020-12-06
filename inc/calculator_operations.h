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
int square();

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 - operand2
*/
int rectangle();

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 * operand2
*/
double cone();


/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double cylinder();
/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double BMI();

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
