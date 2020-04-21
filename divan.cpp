#include "divan.h"

divan::divan(string name_, int size_, string color_, string material_, string pokritie_):mebel(name_, size_, color_, material_){
    pokritie = pokritie_;
}

divan::divan(const divan &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    pokritie = p.pokritie;
}

string divan::GetPokritie() const{
    return pokritie;
}

void divan::print() const{
cout << "Nazvanie: " << name << endl;
cout << "Razmer: " << size << endl;
cout << "Cvet: " << color << endl;
cout << "Material: " << material << endl;
cout << "Pokritie: " << pokritie << endl;
}
