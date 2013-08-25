Quiz
=======

- What is the difference between an `integer` variable and a `floating-point` variable?

| Integer Variable | Floating-Point Variable |
|:-----------------|:------------------------|
| Takes integer values | Takes decimal point values |
| More precise | Loses precision after certain number of significant digits |

- What is the difference between an `unsigned short int` and a `long int`?

| `unsigned short int` | `long int` |
|:---------------------|:-----------|
| cannot take negative values | can take negative values |
| `0 to (2^16-1)` | `-2^31 to (2^31 - 1)` |

- What is the advantage of using _symbolic constant_ over _literal constant_?
    - Makes the code more manageable and configurable should the constant change. 

- What are the advantages of using a `const` keyword rather than `#define`?
    - `const` allows to define the character types of the constant allowing for compiler errors / warning in illegal or incorrect operations.
- What makes for a good or bad variable name?
    - obscure names with irrelevant reference to data being stored is a bad variable name. 
