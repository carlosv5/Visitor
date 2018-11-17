FLAGS = -g

all: pattern

clean: 
	rm *.o ./pattern

clean_objects: 
	rm *.o

pattern: client.o originalX.o originalY.o 
	g++ client.o originalX.o originalY.o -o pattern $(FLAGS) 
	make clean_objects

client.o: client.cpp
	g++ -c client.cpp

originalX.o: Model/originalX.cpp Model/originalX.hpp Model/original.hpp Model/e1.hpp Model/e2.hpp Model/e21.hpp
	g++ -c Model/originalX.cpp

originalY.o: Model/originalY.cpp Model/originalY.hpp Model/original.hpp Model/e1.hpp Model/e2.hpp Model/e22.hpp Model/e3.hpp
	g++ -c Model/originalY.cpp




