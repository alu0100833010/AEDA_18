CXX=g++
CXXFLAGS=-g

OBJS = main.cpp dni_t.cpp 

all: ${OBJS}
	$(CXX) $(CXXFLAGS) -o p5 ${OBJS}

clean:
	rm -rf ${OBJS}