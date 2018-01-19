CPP=g++
CPPFLAGS=-I. -g

hello: helloworld.cpp
	$(CPP) $(CPPFLAGS) -o hello helloworld.cpp

clean: 
	rm hello
