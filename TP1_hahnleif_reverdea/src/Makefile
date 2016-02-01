OBJS = Dvector.o 
PROGS = test display_test size_test constructor_test constructor_normal_test
CXX = g++
CXXFLAGS = -Wall -g

$(OBJS):	
	$(CXX) -c Dvector.cpp

test.o: 
	$(CXX) -c test.cpp

test: test.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) test.o

display_test.o: 
	$(CXX) -c display_test.cpp

display_test: display_test.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) display_test.o

constructor_test.o: 
	$(CXX) -c constructor_test.cpp

constructor_test: constructor_test.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) constructor_test.o

size_test.o: 
	$(CXX) -c size_test.cpp

size_test: size_test.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) size_test.o

constructor_normal_test.o: 
	$(CXX) -c constructor_normal_test.cpp

constructor_normal_test: constructor_normal_test.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) constructor_normal_test.o


clean:
	rm *.o $(PROGS)
