# Compiler Design Lab 🛠️

A comprehensive collection of programs demonstrating the various phases of a compiler, including Lexical Analysis, Syntax Analysis, Semantic Analysis, Intermediate Code Generation, and Code Optimization.

## 📌 Lab Activities

This repository contains implementations for the following 10 tasks:

1.  **Token Identifier:** Recognize keywords, identifiers, constants, and operators.
2.  **Comment Remover:** Strip single-line (`//`) and multi-line (`/* */`) comments from C source code.
3.  **Word Counter:** Count lines, words, and characters (similar to the Unix `wc` command).
4.  **Regex Validator:** Validate strings against specific patterns (e.g., Email, Identifiers).
5.  **Arithmetic Evaluator:** Parse and evaluate expressions using operator precedence.
6.  **Grammar Ambiguity Checker:** Identify Shift/Reduce conflicts in context-free grammars.
7.  **AST Construction:** Build an Abstract Syntax Tree to represent code structure.
8.  **Control Statement Parser:** Validate the syntax of `if-else` and `while` loops.
9.  **DAG Optimization:** Apply Directed Acyclic Graph logic for Common Sub-expression Elimination.
10. **Code Generation:** Translate high-level expressions into Assembly/Machine code.

---

## ⚙️ Tools & Technologies

* **C Language:** Used for manual logic and data structure implementation.
* **Lex (Flex):** A lexical analyzer generator used for pattern matching.
* **Yacc (Bison):** A parser generator used for grammar validation.

---

## 🚀 Execution Instructions

### Option A: Using Lex & Yacc (Recommended)
If you are on Linux, macOS, or using WSL/Cygwin:

1.  **For Lex programs (.l):**
    ```bash
    lex program.l
    gcc lex.yy.c -ll -o lexer
    ./lexer
    ```

2.  **For Lex + Yacc programs (.y & .l):**
    ```bash
    lex program.l
    yacc -d program.y
    gcc lex.yy.c y.tab.c -ll -ly -o parser
    ./parser
    ```

### Option B: Using Pure C
For standalone C implementations:
```bash
gcc program.c -o output
./output
```

---

## 🌐 Running in Online Compilers

To run these programs without local setup:

1.  Go to [OnlineGDB](https://www.onlinegdb.com/) or [TutorialsPoint Coding Ground](https://www.tutorialspoint.com/compile_c_online.php).
2.  **For C:** Simply paste the code and click **Run**.
3.  **For Lex/Yacc:** Use the terminal provided in the online environment to type the commands listed in the **Execution Instructions** section above.

---

## 📂 Project Structure

```text
├── C-Programs/         # Tasks 1-10 (C-Programs)
├── Lex-Yacc-Programs/        # Tasks 1-10 (Lexical Analysis & Syntax Analysis)
└── README.md             # Project Documentation
```

---

## 💡 Key Concepts Covered

* **Scanning:** Breaking input into a stream of tokens.
* **Parsing:** Checking if tokens follow the rules of a language (Grammar).
* **Symbol Tables:** Managing identifiers and their attributes.
* **Optimization:** Reducing code redundancy to improve performance.

---

### Credits: [ThiruXD](https://github.com/thiruxd)