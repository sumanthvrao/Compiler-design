# Mini-compiler

A mini-compiler for do-while and functions in C++ programming language.

Simple constructs from the language were implemented. The frontend of the compiler includes :
1. Symbol table generation
2. Abstract Syntax tree construction (AST)
3. Intermediate Code generation and Code (ICG)
4. Optimization was implemented using flex and bison

The language the compiler is designed for is C. 
The properties we have implemented includes the basic structure of C which includes initializing variables,
creating main and other functions, preprocessor directives limited to including <stdio.h> and so on.


This compiler was built using the various phases of Compiler Design, i.e, Lexical
Analysis, Syntax Analysis, Semantic Analysis and Code Optimisation in mind.
As a part of each stage, an auxiliary part of the compiler was built (Symbol Table,
Abstract Syntax Tree and Intermediate Code). In addition to this, basic error recovery has also been implemented.
Through this process, all kinds of syntax errors and certain semantic errors in a
C++ program can be caught by the compiler.


### Tech Stack

* C programming language
* LEX - A Lexical Analyzer Generator
* Yacc (Yet Another Compiler-Compiler)

