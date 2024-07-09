#include <bits/stdc++.h>
#include "RubiksCube3dArray.cpp"
#include "RubiksCube1dArray.cpp"
#include "RubiksCubeBitboard.cpp"
using namespace std;

int main() {
    RubiksCube1dArray object;
    object.randomShuffleCube(10);
    object.print();
}