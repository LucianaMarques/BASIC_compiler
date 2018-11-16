copilador: compilador.cpp filesystem.cpp asciifilter.cpp asciicharacter.cpp token.cpp
	g++ -o compilador compilador.cpp filesystem.cpp asciifilter.cpp asciicharacter.cpp token.cpp

clean:
	rm -rf *.o
