#ifndef DIVAN_H_INCLUDED
#define DIVAN_H_INCLUDED

#include "mebel.h"

class divan: public mebel{
    string pokritie;
public:
    divan();
    divan(string name_, int size_, string color_, string material_, string pokritie_);
    divan(const divan &p);

    bool SetPokritie(int pokritie_);
    string GetPokritie() const;

    void print() const;
};

#endif // SHKAF_H_INCLUDED
