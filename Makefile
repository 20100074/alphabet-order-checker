
CXX=$$(which clang++ || which g++)

all: build

build: main.cpp
	$(CXX) main.cpp -o program

clean: program
	rm program

distclean: clean
