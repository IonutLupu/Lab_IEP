run:
	g++ helloWorld.cpp -o helloworld.o

clean:
	rm helloworld.o

help:
	@echo "\trun -build all source files"
	@echo "\tclean -remove object files"
