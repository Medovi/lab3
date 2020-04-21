#include "izdelie.h"

izdelie::izdelie(string name_, int size_, string color_){
    if (!SetSize(size_))
        size = 0;
        name = name_;
        color = color_;
}

izdelie::izdelie(){
    name = "";
    size = 0;
    color = "";
}

bool izdelie::SetSize(int size_){
    if (size_ < 0)
    return false;
    else
    size = size_;
    return true;
}

string izdelie::GetName() const{
    return name;
}

int izdelie::GetSize() const{
    return size;
}

string izdelie::GetColor() const{
    return color;
}
