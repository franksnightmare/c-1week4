OBJS = inv_identity.o

%.o: %.cc main.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(OBJS)
	g++ -std=c++11 -Wall -o main main.cc $(OBJS)
