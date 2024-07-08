#ifndef HEX_PIECE_H
#define HEX_PIECE_H

class HexPiece {
public:
    static const int NUM_OF_SIDES = 6;
private:
    int edgeValues[NUM_OF_SIDES];
public:
    HexPiece();
    void setEdgeValue(int index, int value);
    int getEdgeValue(int index) const;
};

#endif // HEX_PIECE_H
