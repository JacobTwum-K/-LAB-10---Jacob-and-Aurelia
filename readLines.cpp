#include "stabbingLines.h"


void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){
	
	int d,e,f;
	
	for(int i=0; i<numLines; i++){
		
		inPutLineFile >> d >> e >> f;
		linesArray[i] = {d,e,f};
		
		}
		
	inPutLineFile.close();
	
	}
