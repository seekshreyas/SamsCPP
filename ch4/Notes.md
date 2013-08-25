Ch4 :: Managing Arrays and Strings
==================================

- `array` : sequential collection of data storage locations, each of which holds the same type of data.
- __Fence Post Error__: writing value past the end of an array can give unpredictable results.
    - Q: "How many fence posts do you need for a 10-foot fence given you need one post for every foot"?
- _Initializing arrays_ : 
    - `int IntegerArray[5] = {0};`
    - `int IntegerArray[5] = {10,20};` initializes only first 2 elements of the array
- __Dynamic Arrays__ for better memory management:
    - `std::vector`
    - `std::deque`
- __String__ : array of characters terminating in a `null`.
    - `char Greeting[] = "HelloWorld";`
        - note the _double quotes_ and the `null` character is added by the compiler
        - at declaration ensure that you make it as large as you will need.
        - `null` = `\0`.
            - `char buffer[80] = {'\0'};`
        - at `cin` when inputting string `space` signals the end of the string.
        - use `cin.get()` to get string inputs from user. 
            - `cin.git(variable, max, delimiter)`. Default delimiter is `\n`.
    - __String Methods__:
        - `strcpy()` : copies entire content of one string into another
        - `strncpy()` : copies a number of characters from one string to another.
        - Be careful using `strcpy()` because the source could be larger than the destination. `strncpy()` copies upto the _first null character_ or the max number of characters specified. So it is safer than `strcpy()`
    - All these methods put the task of memory management on the programmer, which is difficult.
- __String Class__ : encapsulated set of data and functions that helps in string manipulation.
    - `#include <string>`
    - `std::string`