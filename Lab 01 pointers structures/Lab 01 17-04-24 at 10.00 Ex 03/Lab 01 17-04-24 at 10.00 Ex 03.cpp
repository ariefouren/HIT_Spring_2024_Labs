#include <stdio.h>   // for printf
#include <malloc.h>  // for malloc

// The mission: write a function that gets a pointer
// and relocates the original pointer it to a new memory location

// Attempt 3: passing a pointer by reference
// The function gets a pointer by reference
// and relocates it.
void ptrProc(int* &refPtr)
{
	refPtr = (int*)malloc(sizeof(int));
	printf("Inside ptrProc: refPtr = %p\n", refPtr);
}

void main()
{
	int* ptr = NULL;
	printf("ptr = %p\n", ptr);
	ptrProc(ptr);        // try to relocate ptr
	printf("After ptrProc(ptr) :\n");
	printf("ptr = %p\n", ptr);
}
