//
// Created by LENOVO on 09-07-2024.
//

#include "../Model/GenericRubiksCube.h"

#ifndef DFSSOLVER_H
#define DFSSOLVER_H

template<typename T, typename H>

class DFSSolver {
private:
    vector<GenericRubiksCube::MOVE> moves;
    int max_search_depth;

    bool dfs(int depth) {
        if(rubiksCube.isSolved()) {
            return true;
        }
        if(depth > max_search_depth) {
            return false;
        }
        for(int i = 0; i < 18; i++) {
            rubiksCube.move(GenericRubiksCube::MOVE(i));
            moves.push_back((GenericRubiksCube::MOVE(i)));
            if(dfs(depth+1)) {
                return true;
            }
            moves.pop_back();
            rubiksCube.invert(GenericRubiksCube::MOVE(i));
        }
        return false;
    }

public:
    T rubiksCube;

    DFSSolver(T _rubiksCube, int _max_search_depth = 8) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<GenericRubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }
};

#endif //DFSSOLVER_H
