qwerty: qwe.o qwer.o qwert.o					
	g++ qwe.o qwer.o qwert.o -o qwerty			
qwe.o: header.h qwe.cpp
	g++ -c qwe.cpp
qwer.o: qwer.cpp
	g++ -c qwer.cpp
qwert.o: qwert.cpp 							
	g++ -c qwert.cpp
clean: 								
	rm -f qwerty *.o
