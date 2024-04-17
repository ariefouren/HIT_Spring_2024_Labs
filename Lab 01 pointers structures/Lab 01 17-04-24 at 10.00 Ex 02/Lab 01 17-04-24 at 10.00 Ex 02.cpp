#include <stdio.h>   // for printf
#include <malloc.h>  // for malloc

// The mission: write a function that gets a pointer
// and relocates the original pointer it to a new memory location

// Attempt 2 (successful): passing a pointer by pointer
// The function gets a pointer by pointer
// and relocates it.
// The original pointer is changed
void ptrProc(int* *pp)
{
	*pp = (int*)malloc(sizeof(int));
	printf("Inside ptrProc: *pp = %p\n", *pp);
}

void main()
{
	int* ptr = NULL;
	printf("ptr = %p\n", ptr);
	ptrProc(&ptr);        // try to relocate ptr
	printf("After ptrProc(ptr) :\n");
	printf("ptr = %p\n", ptr);
}
