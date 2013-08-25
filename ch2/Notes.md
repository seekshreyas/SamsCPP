Ch2 :: Anatomy of a C++ Program
================================

- `# symbol` : signals __preprocessor__ program, which is always run first. 
- `iostream`: input-output stream file
- program starts with the `main()`. Every C++ program has a `main()`.
    - `return` statement in the `main()` returns an integer value to the operating system once the program is finished executing. It could be used to indicate success/failure. 
- __library__ : is a collection of classes
- `std` : standard _namespace_. To enable objects of the same names, namespaces are used for referring. 
- `<<` : insertion operator
- `std::endl` is _preferable_ over `\n` because it is adapted to the operating system in case it has some other character as a newline operator. 
- To avoid typing namespace everywhere, use:
    - `using` statement, eg:
        - for each method
            - `using std::cout;`
            - `using std::endl;`
        - overall namespace, eg:
            - `using namespace std;`