#include "stabbingLines.h"


void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
	
	Line selectedLine = linesArray[lid];
	
	int x1, y1, x2, y2;
	
	Point cp1 = pointsArray[selectedLine.P1];
	Point cp2 = pointsArray[selectedLine.P2];
	
	x1 = cp1.P x;
	y1 = cp1.P y;
	
	x2 = cp2.P x;
	x2 = cp2.P y;
	
	cout << "Selected Line: " << lid << "\nPoint IDs: " << cp1.Pid << "   " << cp2.Pid << "\nCoordinates: (" << x1 << "," << y1 << ") , (" << x2 << "," << y2 << ")\n";
	
	}
