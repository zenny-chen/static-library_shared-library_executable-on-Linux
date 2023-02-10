#! /bin/sh
common_c_options="-std=gnu11"
common_cxx_options="-std=gnu++17"
# Compile sources for the static library
gcc static_2.S -o static_2.S.o -fPIC -c 
gcc static_1.c -o static_1.c.o -fPIC ${common_c_options} -c
# Generate the static library
ar crs libtest-static.a static_2.S.o static_1.c.o
rm static_1.c.o static_2.S.o
# Compile sources for the shared library
gcc dynamic_1.c -o dynamic_1.c.o -fPIC ${common_c_options} -c
g++ dynamic_2.cpp -o dynamic_2.cpp.o -fPIC ${common_cxx_options} -c
# Generate the shared library
gcc dynamic_1.c.o dynamic_2.cpp.o -o libtest-shared.so -shared -L./ -lstdc++ -ltest-static
rm dynamic_1.c.o dynamic_2.cpp.o
# Compile and generate the executable
gcc main.c -o test ${common_c_options} -L./ -ltest-shared -lstdc++
