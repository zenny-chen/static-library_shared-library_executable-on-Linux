#include <stdio.h>

extern void BFunc(int a);

void AFunc(int a)
{
    BFunc(a * 2);
}

