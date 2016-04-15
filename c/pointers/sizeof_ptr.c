#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 10

int main(int argc, char* argv[])
{
	int b = 0x00001165;
	int a = 65;
    int *ptr1;;
    char *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    int *ptr3 = &b;
    
    printf("sizeof(ptr1) : %lu\n", sizeof(ptr1));
	printf("sizeof(ptr2) : %lu\n", sizeof(ptr2));
	printf("ptr1 : %lu\n", ptr1);
	printf("ptr2 : %lu\n", ptr2);
	
	printf("A : %d\n", a);
	printf("ptr1 : %d\n", *ptr1);
	printf("'a' : %d\n", 'A');
	printf("B : %d\n", b);
	printf("char* ptr2 : %c\n", *ptr2);
	printf("char* ptr2 : %d\n", *ptr2);
	printf("char* ptr2 : %c\n", 65);
	printf("int* ptr3 : %d\n", *ptr3);
	
	printf("*(ptr1 + 1) : %d\n", *(ptr1 + 1));
    return 0;
}
