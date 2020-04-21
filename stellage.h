#ifndef STELLAGE_H_INCLUDED
#define STELLAGE_H_INCLUDED

#include "mebel.h"

class stellage: public mebel{
    int kolsec;
public:
    stellage();
    stellage(string name_, int size_, string color_, string material_, int kolsec_);
    stellage(const stellage &p);

    bool SetKolsec(int kolsec_);
    int GetKolsec() const;

    void print() const;
};

#endif // SHKAF_H_INCLUDED
