SHELL = /bin/sh
EXEC = splitWords.o myFunctions.o execveStudy.o
CXXFLAGS = -O0 -Wall  -I. -g
LDFLAGS = -g -L. -lpthread

main: main.cpp libtest.a
	$(CXX) $^ $(LDFLAGS) -o $@

libtest.a: $(EXEC)
	$(AR) cr $@ $(EXEC) # static library

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) *~ *.bak *.o *.so *.a
