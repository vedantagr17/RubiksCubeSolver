//
// Created by LENOVO on 10-07-2024.
//

#ifndef CORNERPATTERNDATABASE_H
#define CORNERPATTERNDATABASE_H

#include "../Model/GenericRubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"

using namespace std;

class CornerPatternDatabase : public PatternDatabase{
    typedef GenericRubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const GenericRubiksCube &cube) const;
};

#endif //CORNERPATTERNDATABASE_H
