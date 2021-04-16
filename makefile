stabbingLines: getStabbedLines.o printLineByCoords.o readLines.o readLines.o stabbingLines.o
	g++ getStabbedLines.o printLineByCoords.o readLines.o readLines.o stabbingLines.o

readPoints.o: readPoints.cpp
	g++ -c readPoints.cpp

readLines.o:  readLines.cpp
	g++ -c readLines.cpp

printLineByCoords.o: printLineByCoords.cpp
	g++ -c printLineByCoords.cpp

getStabbedLines.o: getStabbedLines.cpp
	g++ -c getStabbedLines.cpp

stabbingLines.o: stabbingLines.cpp
	g++ -c stabbingLines.cpp

clean:
	rm *.o stabbingLines