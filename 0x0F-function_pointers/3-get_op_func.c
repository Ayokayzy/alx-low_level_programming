#include "3-cal.h"

/**
 * get_op_func -  the function that selects the correct
 * function to perform the operation asked by the user.
 * @s: the operator to be passed
 * 
 * Return: This function returns a pointer to the function that
 * corresponds to the operator given as a parameter.
 */

int (*get_op_func(char (*s))(int, int)
{

