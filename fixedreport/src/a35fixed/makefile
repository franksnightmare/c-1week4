program : display.o read.o dataconstrdestr.o data.ih data.h
    g++ -Wall -std=c++14 -o program display.o read.o dataconstrdestr.o \
    -L/home/user/Documents/Programming/C++-Part-1/Week-4/Ex35 -ldata -s
    # Absolute path was used instead of relative path, because the relative path was not working correctly
    mv program ..

dataconstrdestr.o : data.h data.ih dataconstrdestr.cc
    g++ -Wall -std=c++14 -c dataconstrdestr.cc

display.o : data.h data.ih display.cc
    g++ -Wall -std=c++14 -c display.cc

read.o : data.h data.ih read.cc
    g++ -Wall -std=c++14 -c read.cc
