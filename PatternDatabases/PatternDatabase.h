//
// Created by LENOVO on 10-07-2024.
//

#ifndef PATTERNDATABASE_H
#define PATTERNDATABASE_H

#include "../Model/GenericRubiksCube.h"
#include "NibbleArray.h"
#include <bits/stdc++.h>

using namespace std;

class PatternDatabase {
    NibbleArray database;
    size_t size;
    size_t numItems;

    PatternDatabase();

public:
    PatternDatabase(const size_t size);

    PatternDatabase(const size_t size, uint8_t init_val);

    virtual uint32_t getDatabaseIndex(const GenericRubiksCube &cube) const = 0;

    virtual bool setNumMoves(const uint32_t ind, const uint8_t numMoves);

    virtual bool setNumMoves(const GenericRubiksCube &cube, const uint8_t numMoves);

    virtual uint8_t getNumMoves(const GenericRubiksCube &cube) const;

    virtual uint8_t getNumMoves(const uint32_t ind) const;

    virtual size_t getSize() const;

    virtual size_t getNumItems() const;

    virtual bool isFull() const;

    virtual void toFile(const string &filePath) const;

    virtual bool fromFile(const string &filePath);

    virtual vector<uint8_t> inflate() const;

    virtual void reset();
};

#endif //PATTERNDATABASE_H
