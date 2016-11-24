//
// Created by bill on 16-11-23.
//

#include "Property.h"

Property::Property(TypeSymbol* _type, int _dimension) {
    type = _type;
    dimension = _dimension;
}

Property::Property() {}

bool Property::isInteger() {
    return (dimension == 0 && type->equals("int"));
}