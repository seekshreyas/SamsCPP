Ch1 :: Getting Started 
========================

## Introduction

Key Features of C++:

- object-oriented
- inheritance
- encapsulation
- abstraction
- polymorphism
- templates

__Interpreter__ : translates and executes the program as it reads it, turning the program instructions to actions

__Compiler__ : Translates source code into an intermediary form and produces an _object file_

__Linker__ : a linking application that runs after the compiler and combines the object file into an executable program containing machine code that can be directly run on the processor.

Most interpreted programs are called scripts and interpreter itself is often called a script engine. Compilation ensures faster execution and distribution on various architectures because the source code can be distributed and they can then use their compilers to convert those source code to executable programs on their hardware architecture. 

A program is the human-readable form of computer instructions

Interpreters = Runtime Library (VB 6) = Virtual Machine or Runtime (in C#, .Net, Java)

## Procedural, Structural and OOP

#### Procedural / Structural Programming
- procedure = function = method
- batch of instructions executed together
- `divide & conquer`
    - divide the programming goal into smaller tasks
- data structures separate from functions
- reuse of functions difficult because the same functions may not work for different types of data

#### OOP
Model objects rather than data. Objects have characteristics called _properties_ or _attributes_. 

Three pillars of OOP

- __Encapsulation__ : property of being a _self-contained unit_. Accomplishes _data hiding_, where an object can be used without the user knowing or caring how it works internally. Encapsulation is supported through _user-defined types_ called __Classes__.
- __Inheritance__ & Reuse: declare a new type that is an _extension_ of an existing type. This subclass is also called _derived type_
- __Polymorphism__ : _different_ objects can be treated _simiarly_ and still give the desired output. This is achieved via _functional_ polymorphism and _class_ polymorphism.

_Compile Time_ : time when you run the compiler

_Link Time_ : when you run the linker

_Run Time_ : when running the program



