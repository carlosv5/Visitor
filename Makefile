FLAGS = -g

all: pattern

clean: 
	rm *.o ./pattern

clean_objects: 
	rm *.o

pattern: client.o originalX.o originalY.o visitor10.o visitor11.o visitor12.o visitor20.o
	g++ client.o originalX.o originalY.o visitor10.o visitor11.o visitor12.o visitor20.o -o pattern $(FLAGS) 
	make clean_objects

client.o: client.cpp Model/originalX.hpp Visitors/visitor20.hpp
	g++ -c client.cpp

originalX.o: Model/originalX.cpp Model/originalX.hpp Model/original.hpp Model/e1.hpp Model/e2.hpp Model/e21.hpp
	g++ -c Model/originalX.cpp

originalY.o: Model/originalY.cpp Model/originalY.hpp Model/original.hpp Model/e1.hpp Model/e2.hpp Model/e22.hpp Model/e3.hpp
	g++ -c Model/originalY.cpp

visitor10.o: Visitors/visitor10.cpp Visitors/visitor10.hpp Visitors/visitor.hpp Model/originalX.hpp Model/originalY.hpp Model/e1.hpp Model/e3.hpp
	g++ -c Visitors/visitor10.cpp

visitor11.o: Visitors/visitor11.cpp Visitors/visitor11.hpp Visitors/visitor10.hpp
	g++ -c Visitors/visitor11.cpp

visitor12.o: Visitors/visitor12.cpp Visitors/visitor12.hpp Visitors/visitor10.hpp
	g++ -c Visitors/visitor12.cpp

visitor20.o: Visitors/visitor20.cpp Visitors/visitor20.hpp Visitors/visitor.hpp Model/originalX.hpp Model/originalY.hpp Model/e1.hpp Model/e3.hpp
	g++ -c Visitors/visitor20.cpp



