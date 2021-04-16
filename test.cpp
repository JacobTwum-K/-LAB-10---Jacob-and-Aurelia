#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500


using namespace std;
typedef int PointId;
typedef int LineId;
struct Point { //define a Point struct
	PointId Pid; // Point Id
	int P x; // x-coordinate of a point
	int P y; // y-coordinate of a point
};

struct Line { // define a Line by its 2 End points
LineId Lid ; // Line Id
PointId P1; // first Point
PointId P2; // second Point
};

// Declaring the prototype functions
//void readPoints(ifstream& inPutPointFile, Point pointsArray[],
//const int MaxPntsSize, int& numPoints);

//void readLines(ifstream& inPutLineFile, Line linesArray[],
//const int MaxLnsSize, int& numLines);

//void printLineByCoords(LineId lid, Line linesArray[], const
//int MaxLnsSize, Point pointsArray[], const int MaxPntsSize);

//void getStabbedLines (const int xcoord, Line linesArray[], const
//int MaxLnsSize, const int NumLines, Point pointsArray[],
//const int MaxPtsSize, Line stabbedLines[],
//const int MaxStbSize, int& NumOfStbLines);


void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){
	
	int a,b,c;
	
	for(int i=0; i<numPoints; i++){
		
		inPutPointFile >> a >> b >> c;
		pointsArray[i] = {a,b,c};
		
		}
	
	inPutPointFile.close();
	
	}
	
void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){
	
	int d,e,f;
	
	for(int i=0; i<numLines; i++){
		
		inPutLineFile >> d >> e >> f;
		linesArray[i] = {d,e,f};
		
		}
		
	inPutLineFile.close();
	
	}
	
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
		
		if (temp == 0){
			
			cout <<"There's no stabbed Line" << temp << endl;	
		}
		
		else {
			
			cout << "Number of stabbed Lines: " << temp << endl;
			for(int i=0; i<NumOfStbLines; i++){
				printLineByCoords(stabbedLines[i].Lid, linesArray,500,pointsArray,500);
				
				}
			}
	}
	
int main() {
	
	ifstream inPutLineFile("inPutLineFile.txt")
	ifstream inPutPointFile("inPutPointFile.txt")
	Point pointsArray[8];
	Line linesArray[5];
	Line stabbedLines[5];
	int numPoints = 8;
	int numLines = 5;
	int Lid = 0;
	int NumOfStbLines = 0;
	xcoord = 4;
	int C = 1;
	const int MaxLnsSize = 5;
	const int MaxPntsSize = 8;
	
	readLines(inPutLineFile,linesArray,500,numLines);
	
	readPoints(inPutPointFile,pointsArray,500,numPoints);
	
	printLineByCoords(Lid,linesArray,MaxLnsSize,pointsArray,MaxPntsSize);
	
	getStabbedLines(C,linesArray,500,8,pointsArray,500,stabbedLines,500,NumOfStbLines);
	}
