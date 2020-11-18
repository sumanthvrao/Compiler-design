# Mini-compiler

A mini-compiler for do-while, functions and other constructs in C++ programming language.

Code Repository: <a target="_blank" href="https://github.com/sumanthvrao/Mini-compiler" rel="noreferrer noopener">https://github.com/sumanthvrao/Mini-compiler</a>

Report: <a target="_blank" href="CD-Report.pdf" rel="noreferrer noopener">Report.pdf</a>

Components of the compiler include:
1. Symbol Table generation
2. Abstract Syntax Tree construction (AST)
3. Intermediate Code Generation (ICG)
4. Optimization was implemented using flex and bison

The properties implemented include the basic structures of C++ like initializing variables,
creating main and other functions, preprocessor directives limited to including <stdio.h> and so on.

This compiler was built using the various phases of Compiler Design, i.e, Lexical Analysis, Syntax Analysis, Semantic Analysis and Code Optimisation in mind. As a part of each stage, an auxiliary part of the compiler was built (Symbol Table, Abstract Syntax Tree and Intermediate Code). In addition to this, basic error recovery has also been implemented. The compiler is capable enough to catch all syntax errors and certain semantic errors, which may occur in a C++ program.

### Tech Stack

* C programming language
* LEX - A Lexical Analyzer Generator
* Yacc (Yet Another Compiler-Compiler)- A LALR parser generator

