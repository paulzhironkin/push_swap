# Ecole 42: Push_swap

In this project I made sorting algorithm on two stacks. 

The goal is to sort array of integers using two stack and allowed operations: `swap`, `push`, `rotate` and `reverse`

Algorithm has a limit of stack operations number:

| Size of array | Number of operations |
| :---: | --- |
| 3 | 2 operations |
| 5 | up to 12 operations |
| 100 | up to 700 operaations |
| 500 | up to 6500 operations |

### How to build:

Clone repo and type:

```Bash
$ make
```
Run `push_swap` program with array of ints as argument:

```Bash
$ ./push_swap 5 4 3 2 1
```

In response it will return a list op stack operations to sort array

```Bash
 $ rra
 $ pb
 $ pb
 $ sa
 $ rra
 $ pa
 $ ra
 $ pa
```

### Visualisation of execution stack operation list example:

<img src="./visualizer.gif" width="500" alt="vizualize">
