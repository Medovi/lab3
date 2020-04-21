#include "stol.h"

stol::stol(string name_, int size_, string color_, string material_):mebel(name_, size_, color_, material_){
}

stol::stol(const stol &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
}

void stol::print() const{
cout << "Nazvanie: " << name << endl;
cout << "Razmer: " << size << endl;
cout << "Cvet: " << color << endl;
cout << "Material: " << material << endl;
}
