#include "shkaf.h"

shkaf::shkaf(string name_, int size_, string color_, string material_, int polki_):mebel(name_, size_, color_, material_){
    if(!SetPolki(polki_))
    polki = 0;
}

shkaf::shkaf(){
    polki = 0;
}

shkaf::shkaf(const shkaf &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    polki = p.polki;
}

bool shkaf::SetPolki(int polki_){
    if (polki_ < 0)
    return false;
    else
    polki = polki_;
    return true;
}

int shkaf::GetPolki() const{
    return polki;
}

void shkaf::print() const{
cout << "Nazvanie: " << name << endl;
cout << "Razmer: " << size << endl;
cout << "Cvet: " << color << endl;
cout << "Material: " << material << endl;
cout << "Polki: " << polki << endl;
}
