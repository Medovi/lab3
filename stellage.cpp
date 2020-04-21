#include "stellage.h"

stellage::stellage(string name_, int size_, string color_, string material_, int kolsec_):mebel(name_, size_, color_, material_){
    if(!SetKolsec(kolsec_))
    kolsec = 0;
}

stellage::stellage(){
    kolsec = 0;
}

stellage::stellage(const stellage &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    kolsec = p.kolsec;
}

bool stellage::SetKolsec(int kolsec_){
    if (kolsec_ < 0)
    return false;
    else
    kolsec = kolsec_;
    return true;
}

int stellage::GetKolsec() const{
    return kolsec;
}

void stellage::print() const{
cout << "Nazvanie: " << name << endl;
cout << "Razmer: " << size << endl;
cout << "Cvet: " << color << endl;
cout << "Material: " << material << endl;
cout << "Kolichestvo sekciy: " << kolsec << endl;
}
