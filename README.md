*this project was made as part of the 42 curriculum by antgarci*

# PRINTF
## Description
The aim of this project was to create a replica of the C99 function printf with the cspdiuxX% specifiers, without managing the buffer of the original. The function must be compared to the original when running tests and a Makefile had to be done to compile every file.
## Instructions
* Compile:
```
 make
```
* Delete objects
```
make clean
```
* Complete delete
```
make fclean
```
* Recompile
```
make re
```
* Run test given
```
make test
```
## Resources
[Variable arguments theory](https://www.programacionenc.net/index.php?option=com_content&view=article&id=61:funciones-en-c-con-lista-de-argumentos-variable&catid=37:programacion-cc&Itemid=55)
Ai was used on this project to test the program after every part was already done.
## Code structure
In this project I had to research about the variatic arguments in functions and how to use them. So in order to read them I had to initialise a `va_list`.
Then with `va_start` I can initialise it and call to the next argument.
To close the list I use `va_end` in the end of `ft_printf`. 
ft_printf.c is the main file. From here every other line of code is called.
Frist of all I read the string and arguments int the printf function.
```
while (str[i])
        {
                if (str[i] == '%')
                {
                        i++;
                        num_print += ft_conver_check(str[i], par);
                        //if (num_print != 0)
                                i++;
                }
                else
                {
                        write(1, &str[i++], 1);
                        num_print++;
                }
        }

```
Whenever a % is found I check for the next character and resolve depending on its type in `ft_conver_check`.
```
int     ft_conver_check(char c, va_list p)
{
        if (c == 'c')
                return (ft_putchar(va_arg(p, int)));
        else if (c == 's')
                return (ft_putstr(va_arg(p, char *)));
        else if (c == 'p')
                return (ft_hexa_mem(va_arg(p, void *)));
        else if (c == 'd' || c == 'i')
                return (ft_putnbr(va_arg(p, int)));
        else if (c == 'u')
                return (ft_uns_putnbr(va_arg(p, unsigned int)));
        else if (c == 'x' || c == 'X')
                return (ft_hexa_putnbr(va_arg(p, unsigned int), c));
        else if (c == '%')
        {
                write(1, "%", 1);
                return (1);
        }
        return (0);
}

```
It prints in the terminal each case and returns its length to the printf function to sum it up to the string length and return the total lenght.
```
return (num_print);
```
