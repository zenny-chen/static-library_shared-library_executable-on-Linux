#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

extern void SharedLibFunc(void);
extern void AFunc(int a);

int main(int argc, const char* argv[])
{
    SharedLibFunc();
    AFunc(100);
}

