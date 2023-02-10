#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

extern void SharedLibFunc(void);

int main(int argc, const char* argv[])
{
    SharedLibFunc();
}


