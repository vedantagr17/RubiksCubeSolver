#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
using namespace std;

int main() {
    RubiksCube3dArray obj;
    obj.print();

    vector<GenericRubiksCube::MOVE> movesToShuffle = obj.randomShuffleCube(8);
    for(auto move: movesToShuffle) {
        cout << obj.getMove(move) << " ";
    }
    cout << endl;

    IDDFSSolver<RubiksCube3dArray, Hash3d> iddfsSolver(obj, 10);
    vector<GenericRubiksCube::MOVE> movesToSolve = iddfsSolver.solve();
    iddfsSolver.rubiksCube.print();
    for(auto move: movesToSolve) {
        cout << obj.getMove(move) << " ";
    }

    cout << endl;
}