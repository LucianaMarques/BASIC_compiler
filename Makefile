copilador: compilador.cpp filesystem.cpp
	g++ -o compilador compilador.cpp filesystem.cpp

clean:
	rm -rf *.o
