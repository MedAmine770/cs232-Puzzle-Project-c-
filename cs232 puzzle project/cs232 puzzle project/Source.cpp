#include <iostream>
#include "HexPuzzleTwo.h"
using namespace std; 

int main() {
    // Create an instance of HexPuzzleTwo
    HexPuzzleTwo hexPuzzle;

    // Initially display the puzzle state
    cout << "Initial Puzzle State:" << endl;
    hexPuzzle.displaySolution();

    // Shuffle tile edge values
    for (int i = 0; i < NUMOFTILES; i++) {
        hexPuzzle.shuffleTileEdgeValues(i);
    }

    // Swap some outside edges
    hexPuzzle.swapOutsideEdges(0); // Example: swap edges for the first tile

    // Display the puzzle state after shuffling and swapping
    cout << "\nPuzzle State After Shuffling and Swapping Edges:" << endl;
    hexPuzzle.displaySolution();

    // Create a solvable puzzle configuration
    hexPuzzle.createSolution();

    // Display the final solvable puzzle configuration
    cout << "\nFinal Solvable Puzzle Configuration:" << endl;
    hexPuzzle.displaySolution();

    return 0;
}
