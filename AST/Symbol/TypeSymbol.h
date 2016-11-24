//
// Created by bill on 11/21/16.
//

#ifndef ANTCC_TYPESYMBOL_H
#define ANTCC_TYPESYMBOL_H


#include <set>
#include "../Scope.h"

class TypeSymbol {
    string name;
    map<string,VariableSymbol*> attributes;

public:
    // declare a type/struct
    TypeSymbol(string _name);
    bool addAttribute(VariableSymbol& attribute);

    // determine a type/struct
    bool find(string attribute); // find valid attributes
    bool equals(TypeSymbol type);
    bool equals(string typeName);

};


#endif //ANTCC_TYPESYMBOL_H
