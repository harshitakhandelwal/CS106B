// This is the CPP file you will edit and turn in.
// Also remove these comments here and add your own.
// TODO: remove this comment header!

#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "console.h"
#include "filelib.h"
#include "grid.h"
#include "gwindow.h"
#include "simpio.h"
#include "strlib.h"
#include "lifegui.h"
using namespace std;


void printWelcomeMessage() {
    cout << "Welcome to Harshita's implementation of the Game of Life,"
         << endl << "a simulation of the lifecycle of a bacteria colony."
         << endl << "Cells (X) live and die by the following rules:"
         << endl << "- A cell with 1 or fewer neighbours dies."
         << endl << "- Locations with 2 neighbours remain stable."
         << endl << "- Locations with 3 neighbours will create life"
         << endl << "- A cell with 4 or more neighbours dies." << endl
         << endl;


}

void openingFile( Grid<bool>currentGrid,string filename){
    ifstream input;
    input.open(filename);
    string line;
    if(!input)
    {
      cout<<"Unable to open the file"<<endl;
      exit(1); //terminating with errors
    }

    //sizing the grid to match the input file
    getline(input, line);
    int rows=atoi(line.c_str());
    getline(input,line);
    int columns=atoi(line.c_str());
    currentGrid.resize(rows,columns);
            cout<<"rows "<<rows<<endl;
            cout<<"columns "<<columns<<endl;

            input.close();
}

int main() {
    // TODO: Finish the program!
      Grid<bool> currentGrid;
      printWelcomeMessage();                                            // function to print the welcome message
      string gridFileName = getLine("Grid input file name? ");          //to input the filename

      openingFile(currentGrid,gridFileName);                      //function to open the file and print it on the console
      cout << "Have a nice Life!" << endl;
    return 0;
}
