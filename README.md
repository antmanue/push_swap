*This project has been created as part of the 42 curriculum by antmanue.*

# Push Swap

## Description

Push Swap is a project that involves sorting data on a stack using a limited set of instructions, with the goal of achieving the lowest possible number of actions. This project requires implementing various sorting algorithms and selecting the most appropriate one for optimized data sorting.

The main objective is to write a C program called `push_swap` that calculates and displays the shortest sequence of Push Swap instructions needed to sort a given set of integers. The program operates on two stacks (a and b) and uses operations like swap, push, rotate, and reverse rotate to manipulate the stacks.

Key learning outcomes include rigor, proficiency in C, and the application of basic algorithms, particularly focusing on their complexity. Sorting values is straightforward, but finding the fastest method can vary depending on the arrangement of integers.

## Instructions

### Compilation

To compile the project, use the provided Makefile:

```bash
make
```

This will generate the `push_swap` executable.

### Execution

Run the program with a list of integers as arguments. The first argument is at the top of the stack:

```bash
./push_swap 2 1 3 6 5 8
```
Or:

```bash
./push_swap "2 1 3 6 5 8"
```

The program will output a sequence of instructions (one per line) to sort the stack in ascending order, with the smallest number at the top.

If no arguments are provided, the program displays nothing.

In case of error (e.g., non-integer arguments, duplicates, or integers out of range), it displays "Error" followed by a newline on the standard error.

### Example

```bash
$ ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```

### Benchmark

For full validation:
- Sort 100 random numbers in fewer than 700 operations.
- Sort 500 random numbers in no more than 5500 operations.

For minimal project validation (which implies a minimum grade of 80%):
- 100 numbers in under 1100 operations and 500 numbers in under
8500 operations.
- 100 numbers in under 700 operations and 500 numbers in under
11500 operations.
- 100 numbers in under 1300 operations and 500 numbers in under
5500 operations.

You can use this shell command with any range and number of values:
```bash
ARG=$(shuf -i MIN-MAX -n COUNT | tr "\n" " ")
./push_swap $ARG
```
Replace `MIN`, `MAX`, and `COUNT` with the numeric range and amount of values you want to generate. Have into account that `COUNT` must be equal or lower than `MAX`-`MIN`.

Example:
```bash
ARG=$(shuf -i 0-999 -n 100 | tr "\n" " ")
./push_swap $ARG
```

To count the number of operations produced by `push_swap`:
```bash
ARG=$(shuf -i MIN-MAX -n COUNT | tr "\n" " ")
./push_swap $ARG | wc -l
```


## Resources

Some of the main research sources were listed above:

- [Sorting Algorithms](https://en.wikipedia.org/wiki/Sorting_algorithm) - Overview of various sorting algorithms and their complexities.
- [Stack Data Structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) - Explanation of stack operations.
- [42 School Curriculum](https://www.42.fr/en/) - Information about the 42 programming school and its projects.

AI was used to debugging logic, and understanding and optimizing algorithms for the sorting functions. Specifically, AI helped in some brainstorming efficient sorting strategies for different stack sizes and in initial thought process of implementations of the commands and operations.