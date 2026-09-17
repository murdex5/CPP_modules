# 42 C++ Modules 00 - 04

This repository contains the solutions for the first five modules of the 42 C++ curriculum. These modules introduce the fundamentals of Object-Oriented Programming (OOP) in C++98, progressing from basic syntax to complex concepts like inheritance, polymorphism, and abstract classes.

## Module 00: Namespaces, classes, member functions, stdio streams, initialization lists
*(Located in the `CPP_00` folder)*

This module serves as an introduction to the basic syntax and core OOP concepts of C++. 

### Exercises
* **ex00 - Megaphone**: A simple program that converts input strings to uppercase, acting as an introduction to standard I/O streams (`std::cout`) and basic string manipulation.
* **ex01 - My Awesome PhoneBook**: A lightweight CLI application to manage a phonebook of up to 8 contacts.
  * Features an interactive REPL prompt accepting `ADD`, `SEARCH`, and `EXIT` commands.
  * Demonstrates class encapsulation utilizing `Phonebook` and `Contact` classes.
  * Highlights formatted string output using `<iomanip>` (`std::setw`) and handling standard input.

## Module 01: Memory allocation, pointers to members, references, switch statement
*(Located in the `CPP_01` folder)*

This module dives deeper into C++ memory management and language-specific features that distinguish it from C.

### Key Concepts Covered
* **Memory Management:** Dynamic memory allocation using `new` and `delete` (arrays and single objects).
* **Pointers vs. References:** Understanding the differences, syntax, and appropriate use cases for references and pointers.
* **File I/O:** Reading from and writing to files using `std::ifstream` and `std::ofstream`.
* **Pointers to Members:** Using pointers to access member functions of a class.
* **Control Structures:** Proper utilization of the `switch` statement.

## Module 02: Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form
*(Located in the `CPP_02` folder)*

This module introduces the Orthodox Canonical Class Form and operator overloading, using the iterative implementation of a Fixed-Point number class.

### Key Concepts Covered
* **Orthodox Canonical Form:** Ensuring classes have a default constructor, copy constructor, copy assignment operator, and destructor.
* **Operator Overloading:** Customizing the behavior of C++ operators (e.g., `=`, `<<`, arithmetic, and comparison operators) for user-defined types.
* **Fixed-Point Numbers:** Implementing a numeric type that balances the precision of floating-point numbers with the performance of integers.

### Exercises
* **ex00 - My First Class in Orthodox Canonical Form:** Creates the base `Fixed` class, implementing the required Orthodox Canonical form and basic raw bit manipulation (getters/setters).
* **ex01 - Towards a more useful fixed-point number class:** Expands the `Fixed` class to support construction from `int` and `float`, conversion back to `int` and `float`, and stream insertion (`<<`) operator overloading.
* **ex02 - Now we're talking:** Fully flesh out the `Fixed` class by adding comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`), arithmetic operations (`*`, `/`), pre-increment and post-increment operators (`++`), and static `max` evaluation functions.

## Module 03: Inheritance
*(Located in the `CPP_03` folder)*

This module introduces class inheritance in C++, demonstrating how derived classes inherit from base classes, function overriding, and constructor/destructor execution order.

### Key Concepts Covered
* **Inheritance (`public` / `protected` / `private`):** Extending class functionality while maintaining proper access encapsulation.
* **Constructor & Destructor Chaining:** Understanding the specific order in which base and derived class constructors and destructors are called.
* **Function Overriding:** Modifying base class behaviors in derived classes.

### Exercises
* **ex00 - Aaaaand... OPEN!**: Creates the base `ClapTrap` class with fundamental combat stats (hit points, energy, attack damage) and actions (`attack`, `takeDamage`, `beRepaired`).
* **ex01 - Serena, my love!**: Creates a derived `ScavTrap` class that inherits from `ClapTrap`, modifies the base stats, overrides the `attack` method, and introduces a unique `guardGate` function.
* **ex02 - Repetitive work**: Creates another derived `FragTrap` class with its own specific stats and a special `highFiveGuys` capacity.

## Module 04: Subtype polymorphism, abstract classes, interfaces
*(Located in the `CPP_04` folder)*

This module delves into runtime polymorphism, highlighting how C++ handles object behavior dynamically via virtual functions, abstract classes, and deep copies.

### Key Concepts Covered
* **Subtype Polymorphism & Virtual Functions:** Using `virtual` keywords to ensure the correct derived class methods and destructors are called via base class pointers.
* **Abstract Classes & Pure Virtual Functions:** Creating classes that cannot be instantiated and serve solely as blueprints/interfaces.
* **Deep vs. Shallow Copies:** Properly managing dynamically allocated memory within classes during copy construction and assignment to prevent memory leaks and double-free errors.
* **Interfaces:** Creating fully abstract classes composed entirely of pure virtual functions.

---

## Compilation and Execution

Each exercise is self-contained with its own `Makefile`. To compile an exercise, navigate to its directory and run `make`. All programs are compiled using `g++` with `-Wall -Wextra -Werror -std=c++98` flags.

### Example: Running ex00 (Megaphone)
```bash
cd CPP_00/ex00
make
./megaphone "shhhhh... I think the students are asleep..."
# Output: SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

### Example: Running ex02 (Fixed3.0)
```bash
cd CPP_02/ex02
make
./Fixed3.0
```

### Example: Running ex02 (FragTrap)
```bash
cd CPP_03/ex02
make
./FragTrap
```

### Example: Running Module 04 (Polymorphism)
```bash
cd CPP_04/ex00
make
./Polymorphism  # (Or the specific executable name defined in the ex00 Makefile)
# Demonstrates virtual function resolution (e.g., Animal, Dog, Cat sounds).
```

### Cleaning Up
To clean up object files (`.o`), run:
```bash
make clean
```

To remove both object files and the compiled executable, run:
```bash
make fclean
```

To recompile the entire project from scratch, run:
```bash
make re
```