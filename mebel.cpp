#include "mebel.h"

mebel::mebel(string name_, int size_, string color_, string material_):izdelie(name_, size_, color_){
	material = material_;
}

mebel::mebel()
{
	material = "dub";
}

void mebel::SetMaterial(string material_)
{
    material = material_;
}

string mebel::GetMaterial() const{
    return material;
}
