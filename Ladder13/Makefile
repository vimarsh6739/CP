CC := g++
CFLAGS := -Wall -g 

SRCS := $(wildcard *.cpp)
PROGS := $(patsubst %.cpp,%,$(SRCS))

all : $(PROGS) 

% : %.o 
	$(CC) -o $@ $^ $(CFLAGS) 

%.o : %.cpp
	$(CC) -c $< 

clean :
	rm -f $(PROGS)
	> input.txt
	> output.txt

delete :
	rm $(SRCS) $(PROGS)
