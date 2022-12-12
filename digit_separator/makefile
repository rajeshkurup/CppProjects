CPPC = c++
FLAGS = -std=c++2b

all:
	$(CPPC) $(FLAGS) -c ./digit_separator.cpp ./long.cpp
	$(CPPC) $(FLAGS) -o ./digit_separator ./digit_separator.o ./long.o
clean:
	$(RM) ./digit_separator
	$(RM) ./*.o