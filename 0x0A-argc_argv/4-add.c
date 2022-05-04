#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 * count;

count = 0;
while (count < strlen(str)) /*
 * Return; Always 0 (Success)
 */

int check_num(char *str)

{
/*Declaring variables*/
unsigned intcount string*/

{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}

count++;
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * return: Always 0 (Success)
 */

inring to int*/
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not dt main(int argc, char *argv[])

{

/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /*Goes through the whole array*/
{
if(check_num(argv[count]))

{
str_to_int = atoi(argv[count]); /*ATOI --> convert stigits*/
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
