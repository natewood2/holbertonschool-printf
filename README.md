# Printf()

In this project we are recreating the printf(). The printf() is used to format and print a series of characters and values to the standard output. We are tasked with recreating the function. We are not allowed to use 'switch' statements. 


## Authors

- Nathan Wood [[@natewood2](https://www.github.com/natewood2)]
- David Meddaugh [[@meddizzle316](https://www.github.com/meddizzle316)]
- Joshua Lewis [[@joshualewis0124](https://www.github.com/joshualewis0124)]

## Specifiers
These are the specific characters we are looking for and when they are found our program will out put the result.
#### 
| Specific | Output    |
| :-------- | :------- |
| `c` | `Character` | 
|  `s`|  `String` |
|`d`|  `Signed int` |
|`i`|`Unsigned int`|
| `%`| `Percent` |


## Repository File

####
| Files | Functions |
| :----- | :------- |
|   `README.md`     |This is literally the README.md   |
|    `get_funct.c`  |  Stores array of functions |
|   `print_char.c` | Prints characters |
| `print_int.c` | Prints integers |
| `print_unsigned_int.c` | Prints unsigned integers|
| `print_percent.c` | Prints percent|

## Testing Our Function



```bash
  _printf
```
## Access Manpage
```bash
    man _printf
```

#### Initialization:

- The function starts by initializing a function pointer op to determine the right operation for format specifiers. It also initializes the variable result to count the number of bytes printed.

#### Handling NULL Input:

- If the provided format string is NULL, the function exits with a status of 98.

#### Processing the Format String: 

- The function processes the format string character by character. 
  - If it encounters a % followed by a valid format specifier (determined by the get_funct function), it uses the corresponding function (op) to print the argument in the desired format. The number of bytes printed is added to result.

#### Return:
- The function returns the total number of bytes printed.
