//
// Created by bill on 16-11-23.
//

#ifndef ANTCC_PROPERTY_H
#define ANTCC_PROPERTY_H


#include "TypeSymbol.h"

class Property {
    TypeSymbol* type;
    int dimension = 0;

public:
    Property(TypeSymbol* _type,int _dimension);
    Property();
    bool isInteger();
};

#endif //ANTCC_PROPERTY_H
