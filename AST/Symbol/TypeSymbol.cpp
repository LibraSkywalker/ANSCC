//
// Created by bill on 11/21/16.
//

#include "TypeSymbol.h"

#define FAILURE 0;
#define  SUCCESS 1;


TypeSymbol::TypeSymbol(string _name) {
    name = _name;
}

bool TypeSymbol::addAttribute(VariableSymbol& attribute) {
    if (!attribute.isInteger()) return FAILURE;
    if (attributes.find(attribute.getName()) != attributes.end()) return FAILURE;
    attributes[attribute.getName()] = &attribute;
    return SUCCESS;
}

bool TypeSymbol::equals(string typeName) {
    return name == typeName;
}

bool TypeSymbol::equals(TypeSymbol type) {
    return name == type.name;
}

bool TypeSymbol::find(string attribute) {
    return (attributes.find(attribute) != attributes.end());
}