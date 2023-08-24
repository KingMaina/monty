#include "monty.h"

/**
* is_number - Checks if a string is a number
* @str: The string
*
* Return: 1 if true, 0 otherwise
*/
int is_number(char *str)
{
  int i;

  if (!str)
    return (0);

  for (i = 0; str[i]; i++)
  {
    if (str[i] == '-' && i == 0)
      continue;
    if (str[i] < '0' || str[i] > '9')
      return (0);
  }
  return (1);
}