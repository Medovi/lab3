#ifndef MEBEL_H_INCLUDED
#define MEBEL_H_INCLUDED

#include "izdelie.h"

class mebel: public izdelie{
protected:
    string material;
public:
    mebel();
    mebel(string name_, int size_, string color_, string material_);

    void SetMaterial(string material_);
    string GetMaterial() const;

    virtual void print()const = 0;
};

#endif // MEBEL_H_INCLUDED
