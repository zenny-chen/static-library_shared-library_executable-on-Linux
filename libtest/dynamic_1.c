#include <stdio.h>

extern void StaticLibFunc(void);
extern void CPPTest(void);

void __attribute__((visibility("default"))) SharedLibFunc(void)
{
    StaticLibFunc();
    
    CPPTest();
}


