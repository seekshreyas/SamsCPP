Ch3 :: Using Variables, Declaring Constants
=========================================

## Variables
- _characters_ : 1B
- _integer_
    - _short integer_ : 2B
    - _long integer_ : 4B
    - _integer_ : can be either 2B or 4B which is actually determined by the processor (16bit, 32bit, 64bit) and the compiler used. On a 32bit Intel Pentium the integers are 4B
    - _signed & unsigned_ : stored in the same amount of space. Sometimes we need negative numbers, sometimes we don't. Hence largest unsigned integer = 2 * largest signed integer.
- _sizeof_ : determines the amount of space required by a type at program execution. 
- _typedef_ : alias for _type definition_
    - `typedef unsigned short int USHORT;`
- `float` & `double` can hold extremely large values but it loses some precision as most of the time first seven to nine digits are significant. That means the number is rounded off after that many digits. 
- _overflow_: If the limit of the type is reached, the value loops around. Like after 65535 it goes to 0.

## Constants
- Once initialized, their values do not change.
- _literal constant_ : direct value typed into program
    - `int myAge = 39`. Here `39` is the literal constant.
- _symbolic constant_ : represented by a name.
    - `#define studentsPerClass 15`
        - this is of no particular type. The pre-processor does a simple text substitution.
        - `#define` is obsolete.
    - `const unsigned short int studentsPerClass = 15;`
- _enumerated constants_ : create new types and then define variables of those types.
    - `enum COLOR { RED, BLUE, GREEN, WHITE, BLACK};`
        - `RED` is a symbolic constant with value `0`
        - `BLUE` is a symbolic constant with value `1`
        - ...