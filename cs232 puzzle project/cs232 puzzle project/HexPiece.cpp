#include "HexPiece.h"

HexPiece::HexPiece() {
    for (int i = 0; i < NUM_OF_SIDES; i++) {
        edgeValues[i] = 0;
    }
}

void HexPiece::setEdgeValue(int index, int value) {
    if (index >= 0 && index < NUM_OF_SIDES) {
        edgeValues[index] = value;
    }
}

int HexPiece::getEdgeValue(int index) const {
    if (index >= 0 && index < NUM_OF_SIDES) {
        return edgeValues[index];
    }
    return -1; // Return an invalid value if out of bounds
}
