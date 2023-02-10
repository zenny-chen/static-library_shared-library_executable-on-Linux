#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

extern int __attribute__((visibility("hidden"))) ASMTest(int a, int b);

void __attribute__((visibility("default"))) StaticLibFunc(void)
{
    const int result = ASMTest(8, 5);
    printf("The result is: %d\n", result);
}


