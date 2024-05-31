# ft_printf

<p align="center">
  <img src="https://github.com/miladrahmat/42-badges/blob/master/badges/ft_printfe.png"><img width="128" alt="Screen Shot 2024-05-31 at 10 27 07 AM" src="https://github.com/miladrahmat/ft_printf/assets/159012803/eadb1e03-ede6-4351-af75-a322126f3ba7">

</p>
<p align="center">
 My own implementation of the libc function printf
</p>

## Content

- [Introduction](#introduction)
- [Formats](#formats)

## Introduction

In this project I wrote a library which contains the function `ft_printf`, which mimics the function `printf` from `libc`. This library also uses a slightly updated [Libft](https://github.com/miladrahmat/Libft) library. I also created a [Makefile](https://github.com/miladrahmat/ft_printf/blob/main/Makefile) which runs the makefile in `Libft` and copies the functions in `libft.a` into `libftprintf.a`. 

## Formats

| Format | Description                                                | Link to function |
|--------|------------------------------------------------------------|------------------|
| **%c** | Prints a single character                                  |[ft_putchar](https://github.com/miladrahmat/ft_printf/blob/main/ft_putchar.c)
| **%s** | Prints a string                                            | [ft_putstr](https://github.com/miladrahmat/ft_printf/blob/main/ft_putstr.c)
| **%p** | Prints the address of a void pointer in hexadecimal format | [ft_putaddress](https://github.com/miladrahmat/ft_printf/blob/main/ft_putaddress.c)
| **%d** | Prints a decimal number                                    |[ft_putdecimal](https://github.com/miladrahmat/ft_printf/blob/main/ft_putdecimal.c)
| **%i** | Prints an integer in decimal format                        | [ft_putdecimal](https://github.com/miladrahmat/ft_printf/blob/main/ft_putdecimal.c)
| **%u** | Prints an unsigned decimal number                          | [ft_putunsign](https://github.com/miladrahmat/ft_printf/blob/main/ft_putunsign.c)
| **%x** | Prints a number in hexadecimal lowercase format            | [ft_printhex](https://github.com/miladrahmat/ft_printf/blob/main/ft_printhex.c)
| **%X** | Prints a number in hexadecimal uppercase format            | [ft_printhex](https://github.com/miladrahmat/ft_printf/blob/main/ft_printhex.c)
| **%%** | Prints a percent sign                                      |
