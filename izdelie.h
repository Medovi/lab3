#ifndef IZDELIE_H_INCLUDED
#define IZDELIE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class izdelie{
protected:
    string name;
    string color;
    int size;
public:
    izdelie();
    izdelie(string name_,int size_,string color_);
    izdelie(const izdelie &p);

    void SetName(string name_);
    string GetName() const;
    bool SetSize(int size_);
    int GetSize() const;
    void SetColor(string color_);
    string GetColor() const;

    virtual void print()const = 0;
};

#endif // IZDELIE_H_INCLUDED
