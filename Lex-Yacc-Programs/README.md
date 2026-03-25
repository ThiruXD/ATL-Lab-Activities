# Compiler Design Lab: Lex & Yacc Projects

This repository contains 10 lab activities focused on the phases of a compiler, ranging from Lexical Analysis to Intermediate Code Generation and Optimization.

## 🛠️ Tools Overview

### 1. Lex (Lexical Analyzer Generator)
Lex is a tool used to generate a **Scanner**. It breaks the input stream into meaningful chunks called **tokens** (e.g., keywords, identifiers, operators) using Regular Expressions.
* **File Extension:** `.l`
* **Core Function:** `yylex()`

### 2. Yacc (Yet Another Compiler-Compiler)
Yacc is a tool used to generate a **Parser**. It takes the tokens provided by Lex and organizes them into a logical structure (Syntax Tree) based on Formal Grammar (Context-Free Grammar).
* **File Extension:** `.y`
* **Core Function:** `yyparse()`

---

## 📂 Program Descriptions

### 1. Token Identifier (Lex)
Categorizes input text into Keywords (`int`, `if`), Identifiers (`var_name`), Numbers (`123`), and Operators (`+`, `-`). 

### 2. Comment Remover (Lex)
Uses regex to detect `//` (single-line) and `/* ... */` (multi-line) patterns. It outputs the code to a new file while skipping these matches.

### 3. Word Counter (Lex)
Implements the functionality of the Unix `wc` command. It increments counters every time it encounters a newline (`\n`), a space-separated string, or any character.

### 4. Regex Validator (Lex)
Validates specific patterns like Email addresses, Mobile numbers, or Variable naming conventions using anchor tags `^` and `$`.

### 5. Arithmetic Evaluator (Lex + Yacc)
A mini-calculator. Lex identifies numbers and operators; Yacc handles the **Order of Operations** (Precedence) to calculate the final result.

### 6. Grammar Ambiguity Checker (Yacc)
Used to identify "Shift/Reduce" conflicts. For example, testing the "Dangling Else" problem where an `else` could belong to two different `if` statements.

### 7. Abstract Syntax Tree (AST) (Yacc)
Instead of calculating a result, this program creates a hierarchical tree structure in memory, representing the grammatical relationship between operators and operands.

### 8. Control Statement Parser (Lex + Yacc)
Validates the syntax of programming constructs like `if-else` blocks or `while` loops to ensure parentheses and braces are placed correctly.

### 9. DAG-based Optimization (C)
A Directed Acyclic Graph (DAG) is used to identify **Common Sub-expressions**.
* *Example:* In `a = b + c; d = b + c;`, the DAG recognizes `b + c` is calculated twice and optimizes it to `a = b + c; d = a;`.

### 10. Code Generation (Yacc)
The final stage where the parser converts a high-level expression (like `x = a + b`) into low-level **Assembly Instructions** (like `LOAD R1, a`).

---

## 🚀 How to Execute Online

If you don't have a local Linux environment, you can use online compilers like **TutorialsPoint Coding Ground** or **OnlineGDB** (select "C" as the language).

### Steps for Lex + Yacc Programs:

Since online compilers usually provide a terminal, you must run these commands manually:

1.  **Generate the Lexer:**
    ```bash
    lex program.l
    ```
2.  **Generate the Parser (for Yacc programs):**
    ```bash
    yacc -d program.y
    ```
3.  **Compile everything:**
    * *For Lex only:* `gcc lex.yy.c -ll`
    * *For Lex + Yacc:* `gcc lex.yy.c y.tab.c -ll -ly`
4.  **Run the executable:**
    ```bash
    ./a.out
    ```

> **Note:** On some online platforms, you may need to include the `-lfl` flag instead of `-ll`.

---

## 📝 Usage Example (Activity 3: Word Count)
1. Copy the `count.l` code into the editor.
2. Run `lex count.l && gcc lex.yy.c -ll`.
3. Execute `./a.out`.
4. Type your text, then press `Ctrl+D` (EOF) to see the results.

### Credits: [ThiruXD](https://github.com/thiruxd)