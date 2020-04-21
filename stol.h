#ifndef STOL_H_INCLUDED
#define STOL_H_INCLUDED

#include "mebel.h"

class stol: public mebel{
    int kolsec;
public:
    stol();
    stol(string name_, int size_, string color_, string material_);
    stol(const stol &p);

    void print() const;
};

#endif // SHKAF_H_INCLUDED
