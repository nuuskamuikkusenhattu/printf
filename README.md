HIVE HELSINKI project ft_printf

In this project I reproduce behavior of a library function printf() with conversions %scpdiouxX with lenght modifiers h,hh,l,ll, and with an incomplete %f. +-0 are also supported.

The project is written according to 42-Norme, which comes some restrictions (some of the code may look quite odd), such as:

max 25 lines per function
max line width (forces to use non-descriptive variable names)
no for-loops
no declarations and definitions on the same line
Also, almost no library functions were allowed (other than write, malloc and free). therefore the functions called are found in libft (f.e. ft_atoi() instead of atoi(), etc.)

