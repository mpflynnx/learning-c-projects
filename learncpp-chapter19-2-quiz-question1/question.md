## Question #1

C++ question convert to C

- [19.2 - Dynamically allocating arrays](https://www.learncpp.com/cpp-tutorial/dynamically-allocating-arrays/)

Write a program that:

Asks the user how many names they wish to enter.
Dynamically allocates a `std::string` array.
Asks the user to enter each name.
Calls `std::sort` to sort the names (See [18.1 -- Sorting an array using selection sort](https://www.learncpp.com/cpp-tutorial/sorting-an-array-using-selection-sort/#stdsort) and [17.9 -- Pointer arithmetic and subscripting](https://www.learncpp.com/cpp-tutorial/pointer-arithmetic-and-subscripting/))
Prints the sorted list of names.
`std::string` supports comparing strings via the comparison operators < and >. You don't need to implement string comparison by hand.

Your output should match this:

```bash
How many names would you like to enter? 5
Enter name #1: Jason
Enter name #2: Mark
Enter name #3: Alex
Enter name #4: Chris
Enter name #5: John

Here is your sorted list:
Name #1: Alex
Name #2: Chris
Name #3: Jason
Name #4: John
Name #5: Mark
```

A reminder

You can use `std::getline()` to read in names that contain spaces (see lesson [5.9 -- Introduction to std::string](https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/)).

A reminder

To use `std::sort()` with a pointer to an array, calculate begin and end manually

```c
std::sort(array, array + arrayLength);
```