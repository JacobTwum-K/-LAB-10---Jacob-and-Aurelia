#include "stabbingLines.h"


void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){
	
	int a,b,c;
	
	for(int i=0; i<numPoints; i++){
		
		inPutPointFile >> a >> b >> c;
		pointsArray[i] = {a,b,c};
		
		}
	
	inPutPointFile.close();
	
	}
