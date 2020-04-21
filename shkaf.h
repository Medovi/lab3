#ifndef SHKAF_H_INCLUDED
#define SHKAF_H_INCLUDED

#include "mebel.h"

class shkaf: public mebel{
    int polki;
public:
    shkaf();
    shkaf(string name_, int size_, string color_, string material_, int polki_);
    shkaf(const shkaf &p);

    bool SetPolki(int polki_);
    int GetPolki() const;

    void print() const;
};

#endif // SHKAF_H_INCLUDED
