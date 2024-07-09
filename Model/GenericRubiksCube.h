//
// Created by LENOVO on 07-07-2024.
//

#ifndef GENERICRUBIKSCUBE_H
#define GENERICRUBIKSCUBE_H

#include <bits/stdc++.h>
using namespace std;

class GenericRubiksCube {
public:
    enum class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
    };

    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        F, FPRIME, F2,
        B, BPRIME, B2,
        U, UPRIME, U2,
        D, DPRIME, D2
    };

    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    static char getColorLetter(COLOR color);

    virtual bool isSolved() const = 0;

    static string getMove(MOVE ind);

    void print() const;

    vector<MOVE> randomShuffleCube(unsigned int times);

    GenericRubiksCube &move(MOVE ind);

    GenericRubiksCube &invert(MOVE ind);

    virtual GenericRubiksCube &f() = 0;

    virtual GenericRubiksCube &fPrime() = 0;

    virtual GenericRubiksCube &f2() = 0;

    virtual GenericRubiksCube &u() = 0;

    virtual GenericRubiksCube &uPrime() = 0;

    virtual GenericRubiksCube &u2() = 0;

    virtual GenericRubiksCube &l() = 0;

    virtual GenericRubiksCube &lPrime() = 0;

    virtual GenericRubiksCube &l2() = 0;

    virtual GenericRubiksCube &r() = 0;

    virtual GenericRubiksCube &d() = 0;

    virtual GenericRubiksCube &dPrime() = 0;

    virtual GenericRubiksCube &d2() = 0;

    virtual GenericRubiksCube &rPrime() = 0;

    virtual GenericRubiksCube &r2() = 0;

    virtual GenericRubiksCube &b() = 0;

    virtual GenericRubiksCube &bPrime() = 0;

    virtual GenericRubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};

#endif //GENERICRUBIKSCUBE_H
