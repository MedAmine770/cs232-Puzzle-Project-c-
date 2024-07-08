#ifndef HEX_PUZZLE_TWO_H
#define HEX_PUZZLE_TWO_H

#include "HexPiece.h"

const int NUMOFTILES = 7;
const int NUMOFSIDES = 6;
const int SHUFFLECOUNT = 10;

class HexPuzzleTwo {
private:
    HexPiece gameTilesArr[NUMOFTILES];
    int tilesArrangementOnBoardArr[NUMOFTILES];

public:
    HexPuzzleTwo();
    void shuffleTileEdgeValues(int tileID);
    void swapOutsideEdges(int tileID);
    void displaySolution();
    void createSolution();
    int getTileEdgeVal(int tileID, int edgeVal);
    int getUnUsedEdgeValue(int tileID);
    bool isThisTileUnique(int tileID);
};

#endif // HEX_PUZZLE_TWO_H


