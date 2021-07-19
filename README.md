# 42_basecamp_C
Exercises from 42 São Paulo Basecamp (online Piscine)

List of basic programs introducing to C language, using few functions from external libraries and re-writing some already existing functions

## c00

| Function | Description |
|----------|-------------|
| ft_putchar | Prints a character |
| ft_print_alphabet | Prints alfabet |
| ft_print_reverse_alphabet | Prints reverse alfabet |
| ft_print_numbers | Prints numbers 0 to 9 |
| ft_is_negative | Prints P if positive or null and N if negative |
| ft_print_comb | Prints sequence of three numbers without repeting combinations |
| ft_print_comb2 | Prints couple sequence combinations of numbers without repeating |
| ft_putnbr | Prints given number |
| ft_print_combn.c | Prints sequence of n numbers without repeting combinations |

## c01

Introduction to pointers

| Function | Description |
|----------|-------------|
| ft_ft | A function that takes a pointer to int as a parameter, and sets the value "42" to that int |
| ft_ultimate_ft | A function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int |
| ft_swap | A function that swaps the value of two integers whose addresses are entered as parameters |
| ft_div_mod | This function divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod. |
| ft_ultimate_div_mod | This function divides parameters a by b. The result of this division is stored in the int pointed by a. The remainder of the division is stored in the int pointed by b. |
| ft_putstr | A function that displays a string of characters on the standard output |
| ft_strlen | A function that counts and returns the number of characters in a string |
| ft_rev_int_tab | A function which reverses a given array of integer (first goes last, etc) |
| ft_sort_int_tab | A function which sorts an array of integers by ascending order |

## c02

| Function | Description |
|----------|-------------|
| ft_strcpy | Reproduce the behavior of the function strcpy |
| ft_strncpy | Reproduce the behavior of the function strncpy |
| ft_str_is_alpha | A function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character |
| ft_str_is_numeric | A unction that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character |
| ft_str_is_lowercase | A function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character |
| ft_str_is_uppercase | A  function that returns 1 if the string given as a parameter contains only uppercase alphabetical characters, and 0 if it contains any other character |
| ft_str_is_printable | A function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character |
| ft_strupcase | A function that transforms every letter to uppercase |
| ft_strlowcase | A function that transforms every letter to lowercase |
| ft_strcapitalize | A function that capitalizes the first letter of each word and transforms all other letters to lowercase |

## c03

| Function | Description |
|----------|-------------|
| ft_strcmp | Reproduce the behavior of the function strcmp |
| ft_strncmp | Reproduce the behavior of the function strncmp |
| ft_strcat | Reproduce the behavior of the function strcat |
| ft_strncat | Reproduce the behavior of the function strncat |
| ft_strstr | Reproduce the behavior of the function strstr |

## c04

| Function | Description |
|----------|-------------|
| ft_strlen | A function that counts and returns the number of characters in a string |
| ft_putstr | A function that displays a string of characters on the standard output |
| ft_putnbr | A function that displays the number entered as a parameter. The function has to be able to display all possible values within an int type variable |
| ft_atoi | A function that converts the initial portion of the string pointed by str to its int
representation |

## c05

| Function | Description |
|----------|-------------|
| ft_iterative_factorial | An iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter |
| ft_recursive_factorial | A recursive function that returns the factorial of the number given as a parameter |
| ft_iterative_power | An iterated function that returns the value of a power applied to a number. An power lower than 0 returns 0. Overflows must not be handled |
| ft_recursive_power | A recursive function that returns the value of a power applied to a number |
| ft_fibonacci | A function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index |
| ft_sqrt | A  function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number |
| ft_is_prime | A function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t |
| ft_find_next_prime | A function that returns the next prime number greater or equal to the number given as argument |

## c06

| Function | Description |
|----------|-------------|
| ft_print_program_name | A program that displays its own name |
| ft_print_params | A program that displays its given arguments. One per line, in the same order as in the command line |
| ft_rev_params | A program that displays its given arguments. One per line, in the reverse order of the command line |
| ft_sort_params | A program that displays its given arguments sorted by ascii order |

## c07

| Function | Description |
|----------|-------------|
| ft_strdup | eproduce the behavior of the function strdup |
| ft_range | A function that returns an array of int. This int array must contain all values between min and max |
| ft_ultimate_range | A function that allocates and assigns an array of int. This int array should contain all values between min and max |
| ft_strjoin | A function that will concatenate the set of strings pointed to by strs separating them with sep |
