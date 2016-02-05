PROGS=test_one test_size test_display test_constructor_normal test_q_two_one test_constructor_normal
CXX = g++
CXXFLAGS = -Wall -g

test_%: Dvector.o test_%.o 
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY : clean
clean:
	rm -f *.o $(PROGS)

.PHONY : all
all: $(PROGS)
