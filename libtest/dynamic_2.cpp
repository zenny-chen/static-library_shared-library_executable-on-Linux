#include <cstdio>
#include <vector>

extern "C" void __attribute__((visibility("hidden"))) CPPTest()
{
    std::vector<int> vec { 1, 2, 3, 4 };
    int sum = 0;
    for(auto const &elem : vec) {
        sum += elem;
    }
    
    printf("sum = %d\n", sum);
}


