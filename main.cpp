#include <stdio.h>

// Function to increment a number

int increment(int num)
{
    num = num + 1;
    return num;
}

void pointers()
{
    int var = 10;

    // Declare pointer variable

    int* ptr;

    // Note that data type of ptr and var must be the same

    ptr = &var;

    // Increment the value pointed to by the pointer
    // *(ptr) = *(ptr) + 1;

    int newNum = increment(var);  

    // Assign the address of a variable to a pointer

    printf("Value at ptr = %p \n", (void*)ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
    printf("Value of newNum = %d \n", newNum);
}

// Driver program
int main()
{
    pointers();
    return 0;
}
