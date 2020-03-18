# 0x11. C - printf

## _printf

The printf function (which derives its name from print formatted) prints a message on the screen using a format string that includes instructionsfor mixing multiple strings into the final string to be displayed on the screen.

## Declaration
```bash
int _printf(const char *format, ...)
```

printf receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to be printed literally and marks to be replaced by text that is obtained from the additional parameters. Therefore printf is called with as many parameters as there aremarks in the format string plus one (the format string itself).

The format converters accepted are:

%c Print the corresponding ASCII character
%s Character string (ending in '\ 0')
%d Signed decimal conversion of an integer 
%i Signed decimal conversion of an integer 

## Usage
```python
Example N° 1

_printf("Holberton%s,%s%d,%d\n", school,month,day,year);
```

## Output
```bash
Holbertonschool, March 18, 2020
```
compiled with the flags:

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

```python
Example N° 2

int num1 = 12;
int num2 = 345;
_printf("%d\n", num2);
_printf("%d\n", num1);
```
## Output
```bash
345
12
```

# Authors

Mónica Ortíz Alvarez [GitHub](https://github.com/monicajoa)

Nicolas Quinchia Osorio [GitHub](https://github.com/nicolasquinchia)
