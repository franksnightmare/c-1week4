program : display.o read.o dataconstrdestr.o data.ih data.h
	g++ -Wall -std=c++14 -o program display.o read.o dataconstrdestr.o \ # dataconstrdestr.o only used for pimpl
	-L/home/user/Documents/Programming/C++-Part-1/Week-4/Ex35 -ldatapimpl2 -s # different libraries were used for each situation
	mv program ..

dataconstrdestr.o : data.h data.ih dataconstrdestr.cc # only used for pimpl
	g++ -Wall -std=c++14 -c dataconstrdestr.cc

display.o : data.h data.ih display.cc
	g++ -Wall -std=c++14 -c display.cc

read.o : data.h data.ih read.cc
	g++ -Wall -std=c++14 -c read.cc
