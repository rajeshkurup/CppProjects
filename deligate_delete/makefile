CPPC = c++
FLAGS = -std=c++2b

all:
	$(CPPC) $(FLAGS) -c ./deligate_delete.cpp ./integer.cpp ./uint.cpp
	$(CPPC) $(FLAGS) -o ./deligate_delete ./deligate_delete.o ./integer.o ./uint.o
clean:
	$(RM) ./deligate_delete
	$(RM) ./*.o