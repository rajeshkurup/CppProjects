CPPC = c++
FLAGS = c++2b

all:
	$(CPPC) -std=$(FLAGS) -c ./digit_separator.cpp ./long.cpp
	$(CPPC) -std=$(FLAGS) -o ./digit_separator ./digit_separator.o ./long.o
clean:
	$(RM) ./digit_separator
	$(RM) ./*.o