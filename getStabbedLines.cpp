#include "stabbingLines.h"


void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines){
	
	int temp = 0;
	
	for(int i=0; i<NumLines; i++){
		
		if(pointsArray[linesArray[i].P2].P x >= xcoord){
			
			if(pointsArray[linesArray[i].P1].P x <= xcoord){
				
				stabbedLines[temp] = linesArray[i];
				temp++;
				NumOfStbLines++;
				}
			}
		}
		
		if {
			cout << "Number of stabbed Lines: " << temp << endl;
			for(int i=0; i<NumOfStbLines; i++){
				printLineByCoords(stabbedLines[i].Lid, linesArray,500,pointsArray,500);
				
		}
		
		else (temp == 0) {
			
			cout <<"There is no stabbed Line" << temp << endl;	
			
				}
			}
	}
