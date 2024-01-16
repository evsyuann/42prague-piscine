I studied the **C language** and a little bit of **Shell** during the Piscine in November 2023 at 42 Prague School.

Although the Piscine started with an introduction to Shell and simple code tasks in C, it became pretty tough soon with topics like Recursion, Pointers and Memory allocation, Header files, and Makefiles. On top of that, the goal of the Piscine was to teach us how standard libraries in C work by forcing us to implement many of the library functions ourselves. For example, it was prohibited to use `printf()`, and we had to use the `write()` function with a specific file descriptor. We had to implement our own functions to print characters, strings, and numbers.

It gave me an awesome overview of how programs look at a deeper level. I studied new concepts and practiced how to solve tasks without guidance from the teacher because there wasn't any! Instead, I collaborated with my colleagues, who were all Piscine students.

During that time, I completed the following tasks:

# [Shell00](https://github.com/evsyuann/Piscine/tree/main/shell00) Introduction to Shell
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/shell00/ex00)  | z  | A file called z that returns "Z", followed by a new line, whenever the command cat is used on it |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/shell00/ex01)  | testShell00  | Creating a file and changing permissions and metadata|
| [ex02](https://github.com/evsyuann/Piscine/tree/main/shell00/ex02)  | exo2  | Creating files and directories and changing their permissions and metadata |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/shell00/ex03)  | id_rsa_pub  | Creating your own SSH key |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/shell00/ex04)  | midLS  | Placing the command line that will list all files and directories in your current directory, separated by a comma and a space, by order of modification date |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/shell00/ex05)  | git_commit  | A shell script that displays the ids of the last 5 commits of your git repository |
| [ex06](https://github.com/evsyuann/Piscine/tree/main/shell00/ex06)  | git_ignore  | A short shell script that lists all the existing files ignored by your git repository |
| [ex07](https://github.com/evsyuann/Piscine/tree/main/shell00/ex07)  | b | Using patch file to find b |
| [ex08](https://github.com/evsyuann/Piscine/tree/main/shell00/ex08)  | clean | A command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by # |

# [Shell01](https://github.com/evsyuann/Piscine/tree/main/shell01) More Shell
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/shell01/ex01)  | print_groups  | A command line that will display the list of groups for which the login, contained in the environment variable FT_USER , is a member. Separated by commas without spaces|
| [ex02](https://github.com/evsyuann/Piscine/tree/main/shell01/ex02)  | find_sh  | A command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. It should display only the file names without the .sh|
| [ex03](https://github.com/evsyuann/Piscine/tree/main/shell01/ex03)  | count_files  | A command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. It should include ".", the starting directory |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/shell01/ex04)  | MAC  | A command line that displays your machine’s MAC addresses. Each address must be followed by a line break |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/shell01/ex05)  | "\?$*'MaRViN'*$?\"  | A file containing only "42", and nothing else |

# [C00](https://github.com/evsyuann/Piscine/tree/main/c00) Introduction to C
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c00/ex00)  | ft_putchar  | A function that displays the character passed as a parameter |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c00/ex01)  | ft_print_alphabet  | A function that displays the alphabet in lowercase, on a single line, by ascending order |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c00/ex02)  | ft_print_reverse_alphabet  | A function that displays the alphabet in lowercase, on a single line, by descending order |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c00/ex03)  | ft_print_numbers  | A function that displays all digits, on a single line, by ascending order |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/c00/ex04)  | ft_is_negative  | A function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/c00/ex05)  | ft_print_comb  | A function that displays all different combinations of three different digits in ascending order |

# [C01](https://github.com/evsyuann/Piscine/tree/main/c01) Welcome to pointers
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c01/ex00)  | ft_ft  | A function that takes a pointer to int as a parameter, and sets the value "42" to that int |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c01/ex01)  | ft_ultimate_ft  | A function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c01/ex02)  | ft_swap  | A function that swaps the value of two integers whose addresses are entered as parameters |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c01/ex03)  | ft_div_mod  | A function that divides parameters a by b and stores the result in the int pointed by div. It also stores the remainder of the division of a by b in the int pointed by mod |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/c01/ex04)  | ft_ultimate_div_mod  | A function that divides parameters a by b. The result of this division is stored in the int pointed by a. The remainder of the division is stored in the int pointed by b |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/c01/ex05)  | ft_putstr  | A function that displays a string of characters on the standard output |
| [ex06](https://github.com/evsyuann/Piscine/tree/main/c01/ex06)  | ft_strlen  | A function that counts and returns the number of characters in a string |
| [ex07](https://github.com/evsyuann/Piscine/tree/main/c01/ex07)  | ft_rev_int_tab  | A function which reverses a given array of integer |

# [C02](https://github.com/evsyuann/Piscine/tree/main/c02) Working with strings
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c02/ex00)  | ft_strcpy  | Reproducing the behavior of the function strcpy |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c02/ex01)  | ft_strncpy  | Reproducing the behavior of the function strncpy |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c02/ex02)  | ft_str_is_alpha  | A function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c02/ex03)  | ft_str_is_numeric  | A function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/c02/ex04)  | ft_str_is_lowercase  | A function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/c02/ex05)  | ft_str_is_uppercase  | A function that returns 1 if the string given as a parameter contains only uppercase alphabetical characters, and 0 if it contains any other character |
| [ex06](https://github.com/evsyuann/Piscine/tree/main/c02/ex06)  | ft_str_is_printable  | A function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character |
| [ex07](https://github.com/evsyuann/Piscine/tree/main/c02/ex07)  | ft_strupcase  | A function that transforms every letter to uppercase |
| [ex08](https://github.com/evsyuann/Piscine/tree/main/c02/ex08)  | ft_strlowcase  | A function that transforms every letter to lowercase |
| [ex09](https://github.com/evsyuann/Piscine/tree/main/c02/ex09)  | ft_strcapitalize  | A function that capitalizes the first letter of each word and transforms all other letters to lowercase |
| [ex10](https://github.com/evsyuann/Piscine/tree/main/c02/ex10)  | ft_strlcpy  | Reproducing the behavior of the function strlcpy |

# [C03](https://github.com/evsyuann/Piscine/tree/main/c03) Sring.h functions
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c03/ex00)  | ft_strcmp  | Reproducing the behavior of the function strcmp |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c03/ex01)  | ft_strncmp  | Reproducing the behavior of the function strncmp |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c03/ex02)  | ft_strcat  | Reproducing the behavior of the function strcat |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c03/ex03)  | ft_strncat  | Reproducing the behavior of the function strncat |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/c03/ex04)  | ft_strstr  | Reproducing the behavior of the function strstr |

# [C04](https://github.com/evsyuann/Piscine/tree/main/c04) Continue working with strings
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c04/ex00)  | ft_strlen  | A function that counts and returns the number of characters in a string |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c04/ex01)  | ft_putstr  | A function that displays a string of characters on the standard output |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c04/ex02)  | ft_putnbr  | A function that displays the number entered as a parameter |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c04/ex03)  | ft_atoi  | A function that converts the initial portion of the string pointed by str to its int representation |

# [C05](https://github.com/evsyuann/Piscine/tree/main/c05) Mathematical concepts and Recursion
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c05/ex00)  | ft_iterative_factorial  | An iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c05/ex01)  | ft_recursive_factorial  | A recursive function that returns the factorial of the number given as a parameter |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c05/ex02)  | ft_iterative_power  | An iterated function that returns the value of a power applied to a number |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c05/ex03)  | ft_recursive_power  | A recursive function that returns the value of a power applied to a number |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/c05/ex04)  | ft_fibonacci  | A function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/c05/ex05)  | ft_sqrt  | A function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number |
| [ex06](https://github.com/evsyuann/Piscine/tree/main/c05/ex06)  | ft_is_prime  | A function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t |
| [ex07](https://github.com/evsyuann/Piscine/tree/main/c05/ex07)  | ft_find_next_prime  | A function that returns the next prime number greater or equal to the number given as argument |

# [C06](https://github.com/evsyuann/Piscine/tree/main/c06) Introduction to Arguments
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c06/ex00)  | ft_print_program_name  | A program that displays its own name followed by a new line |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c06/ex01)  | ft_print_params  | A program that displays its given arguments |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c06/ex02)  | ft_rev_params  | A program that displays its given arguments in the reverse order of the command line |

# [C07](https://github.com/evsyuann/Piscine/tree/main/c07) Memory allocation
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c07/ex01)  | ft_strdup  | Reproducing the behavior of the function strdup |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c07/ex02)  | ft_range  | A function ft_range which returns an array ofints. This int array should contain all values between min and max |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c07/ex03)  | ft_ultimate_range  | A function ft_ultimate_range which allocates and assigns an array of ints. This int array should contain all values between min and max |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c07/ex04)  | ft_strjoin  | A function that will concatenate all the strings pointed by strs separated by sep |

# [C08](https://github.com/evsyuann/Piscine/tree/main/c08) Introduction to Header files
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c08/ex00)  | ft.h  | Creating ft.h file with the prototypes of some functions |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c08/ex01)  | ft_boolean.h  | Creating a ft_boolean with macros |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c08/ex02)  | ft_abs.h  | Creating a macro ABS which replaces its argument by it absolute value |
| [ex03](https://github.com/evsyuann/Piscine/tree/main/c08/ex03)  | ft_point.h  | Creating a file ft_point.h that sets pointers |
| [ex04](https://github.com/evsyuann/Piscine/tree/main/c08/ex04)  | ft_strs_to_tab  | A function that takes an array of string as argument and the size of this array and it transforms each element of av into a structure |
| [ex05](https://github.com/evsyuann/Piscine/tree/main/c08/ex05)  | ft_show_tab  | A function that displays the content of the array created by the previous function |

# [C09](https://github.com/evsyuann/Piscine/tree/main/c09) Introduction to Makefile
_______
| Exercise  | Function name | Description |
| ------------- | ------------- | ------------- |
| [ex00](https://github.com/evsyuann/Piscine/tree/main/c09/ex00)  | libft  | Creating libft.a library using a shell script called libft_creator.sh |
| [ex01](https://github.com/evsyuann/Piscine/tree/main/c09/ex01)  | Makefile  | Creating the Makefile that’ll compile a library libft.a |
| [ex02](https://github.com/evsyuann/Piscine/tree/main/c09/ex02)  | ft_split | A function that splits a string of character depending on another string of characters
