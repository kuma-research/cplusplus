
# This Makefile will do "make" on all the existing C++ file(.cpp) in the
# current directory.

# $< expends all the prerequisites
%.o: %.cpp
	$(CXX) -c $<

# Generate a list of objects for tutorial. Replace the list with $^. And the
# result as $@
chap09: $(patsubst %.cpp, %.o, $(wildcard *.cpp))
	$(CXX) $^ -o $@

clean:
	rm -rf *.o
