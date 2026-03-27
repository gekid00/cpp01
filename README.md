# CPP Module 01

42 school project covering C++ memory allocation, references, pointers to members,
and file manipulation. Five exercises progressively introduce core C++ concepts.

## Technologies

- C++98
- Makefile

## Build Instructions

Each exercise is in its own directory. To compile an exercise:

```bash
cd ex00      # or ex01, ex02, ex03, ex04
make
```

Standard Makefile targets are available: `make clean`, `make fclean`, `make re`.

## Exercises

### ex00 - BraiiiiiiinnnzzzZ (Stack vs Heap)

Demonstrates the difference between stack and heap allocation using a `Zombie` class.

```bash
./zombie
```

### ex01 - Moar brainz! (Heap Array Allocation)

Allocates an array of `Zombie` objects on the heap using `new[]` and `delete[]`.

```bash
./zombie_horde
```

### ex02 - HI THIS IS BRAIN (Pointers vs References)

Prints the address and value of a string through a pointer and a reference.

```bash
./brain
```

### ex03 - Unnecessary Violence (References and Pointers as Members)

Illustrates the difference between holding a reference (`HumanA`) and a pointer
(`HumanB`) to a `Weapon` object inside a class.

```bash
./weapon
```

### ex04 - Sed is for losers (File String Replace)

Reads a file and replaces every occurrence of a string, writing the result
to `<filename>.replace`. Implements replacement without `std::string::replace`.

```bash
./sed_is_for_losers <filename> <search> <replace>
```

## Key Concepts

- Stack vs heap allocation (`new`, `delete`, `new[]`, `delete[]`)
- Pointers and references in C++
- References vs pointers as class members
- File I/O with `std::ifstream` and `std::ofstream`
- String searching and manual replacement
