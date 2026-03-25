# Compiler Design Lab: Pure C Implementations

This repository contains C language implementations for 10 core compiler design activities. These programs simulate the logic of a compiler—from lexical analysis to code generation—without relying on external tools like Lex or Yacc.

## 📌 Project Overview

Each program is designed to demonstrate a specific phase of the compilation process:

| No. | Activity | Description |
| :--- | :--- | :--- |
| 1 | **Token Identifier** | Manually parses strings to find Keywords, Identifiers, and Numbers. |
| 2 | **Comment Remover** | Filter out `//` and `/* */` using file pointer manipulation. |
| 3 | **Word Counter** | Simulates `wc` utility by tracking state changes (space vs. character). |
| 4 | **Regex Validator** | Uses `regex.h` to validate string patterns. |
| 5 | **Arithmetic Eval** | Implements a simple parser to solve math expressions. |
| 6 | **Grammar Ambiguity** | Demonstrates shift-reduce logic for ambiguous grammars. |
| 7 | **AST Construction** | Uses Linked Lists/Trees to represent expression hierarchy. |
| 8 | **Control Flow Parser** | Validates `while` and `if` syntax using string matching. |
| 9 | **DAG Optimization** | Identifies and eliminates redundant code (Common Sub-expression Elimination). |
| 10 | **Code Generation** | Translates high-level operations into Assembly-style instructions. |

---

## 🚀 How to Execute

### 1. Requirements
* A C compiler (e.g., **GCC**, **Clang**, or **MSVC**).
* For Activity 4, a POSIX-compliant environment (Linux/macOS) is required for `regex.h`.

### 2. Compilation
To compile any of the programs, use the following command in your terminal:

```bash
gcc program_name.c -o program
```

### 3. Running the Program
Execute the compiled binary:

```bash
./program
```

---

## 🌐 Running in Online Compilers

If you are using an online tool like **OnlineGDB**, **TutorialsPoint**, or **Repl.it**:

1.  Select **C** as the programming language.
2.  Copy the code for the specific activity into `main.c`.
3.  Click the **Run** button.
4.  For programs involving file I/O (like Activity 2), ensure you create a dummy `input.c` file in the same directory before running.

---

## 📂 Implementation Details

### Lexical vs. Syntax Analysis
* **Activities 1-4** focus on the **Scanner** (Lexical Analysis). They deal with individual characters and patterns.
* **Activities 5-8** focus on the **Parser** (Syntax Analysis). They deal with the structural rules and "grammar" of the code.
* **Activities 9-10** focus on the **Back-end** (Optimization and Synthesis). They deal with making the code faster and translating it for the CPU.

---
