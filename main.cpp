#include <iostream>
#include <string>
#include "izdelie.h"
#include "mebel.h"
#include "shkaf.h"
#include "stellage.h"
#include "stol.h"
#include "divan.h"

using namespace std;

int main()
{
    string name_, color_, material_, pokritie_;
    int polki_, size_, kolsec_, vibor;

    //a:
    cout << "Vvedite 1, chtobi vvesti dannie shkafa;" << endl;
    cout << "Vvedite 2, chtobi vvesti dannie stellaga;" << endl;
    cout << "Vvedite 3, chtobi vvesti dannie stola;" << endl;
    cout << "Vvedite 4, chtobi vvesti dannie divana;" << endl;
    cout << "Vvedite 5, zavershit` rabotu programmi." << endl;

    cout <<"Vvodite: ";
    cin >> vibor;
    cout << endl;
    if ((vibor>=6)||(vibor<=0)){
    cout << "Please, vvedite chislo ot 1 do 5!"<< endl<<endl;
    //goto a;
    }
    cout << endl;

    switch (vibor){
    case 1:{
    cout << "Vi vibrali shkaf." << endl;
    cout << "Vvedite nazvanie shkafa: ";
    cin >> name_;
    cout << "Vvedite razmer shkafa: ";
    cin >> size_;
    cout << "Vvedite cvet shkafa: ";
    cin >> color_;
    cout << "Vvedite material shkafa: ";
    cin >> material_;
    cout << "Vvedite kolicvestvo polok shkafa: ";
    cin >> polki_;
    cout << endl;

    shkaf s(name_, size_, color_, material_, polki_);
    s.print();
    cout << endl;

    cout << "Vvedite 1, chtobi vvesti dannie shkafa;" << endl;
    cout << "Vvedite 2, chtobi vvesti dannie stellaga;" << endl;
    cout << "Vvedite 3, chtobi vvesti dannie stola;" << endl;
    cout << "Vvedite 4, chtobi vvesti dannie divana;" << endl;
    cout << "Vvedite 5, zavershit` rabotu programmi." << endl;

    cout <<"Vvodite: ";
    cin >> vibor;
    cout << endl;
    //goto a;
}
    case 2:{
    cout << "Vi vibrali stellage." << endl;
    cout << "Vvedite nazvanie stellaga: ";
    cin >> name_;
    cout << "Vvedite razmer stellaga: ";
    cin >> size_;
    cout << "Vvedite cvet stellaga: ";
    cin >> color_;
    cout << "Vvedite material stellaga: ";
    cin >> material_;
    cout << "Vvedite kolicvestvo sekciy stellaga: ";
    cin >> kolsec_;
    cout << endl;

    stellage stel(name_, size_, color_, material_, kolsec_);
    stel.print();
    cout << endl;

    cout << "Vvedite 1, chtobi vvesti dannie shkafa;" << endl;
    cout << "Vvedite 2, chtobi vvesti dannie stellaga;" << endl;
    cout << "Vvedite 3, chtobi vvesti dannie stola;" << endl;
    cout << "Vvedite 4, chtobi vvesti dannie divana;" << endl;
    cout << "Vvedite 5, zavershit` rabotu programmi." << endl;

    cout <<"Vvodite: ";
    cin >> vibor;
    cout << endl;
    //goto a;
}
    case 3:{
    cout << "Vi vibrali stol." << endl;
    cout << "Vvedite nazvanie stola: ";
    cin >> name_;
    cout << "Vvedite razmer stola: ";
    cin >> size_;
    cout << "Vvedite cvet stola: ";
    cin >> color_;
    cout << "Vvedite material stola: ";
    cin >> material_;
    cout << endl;

    stol st(name_, size_, color_, material_);
    st.print();
    cout << endl;

    cout << "Vvedite 1, chtobi vvesti dannie shkafa;" << endl;
    cout << "Vvedite 2, chtobi vvesti dannie stellaga;" << endl;
    cout << "Vvedite 3, chtobi vvesti dannie stola;" << endl;
    cout << "Vvedite 4, chtobi vvesti dannie divana;" << endl;
    cout << "Vvedite 5, zavershit` rabotu programmi." << endl;

    cout <<"Vvodite: ";
    cin >> vibor;
    cout << endl;
    //goto a;
}
    case 4:{
    cout << "Vi vibrali divan." << endl;
    cout << "Vvedite nazvanie divana: ";
    cin >> name_;
    cout << "Vvedite razmer divana: ";
    cin >> size_;
    cout << "Vvedite cvet divana: ";
    cin >> color_;
    cout << "Vvedite material divana: ";
    cin >> material_;
    cout << "Vvedite pokritie divana: ";
    cin >> pokritie_;
    cout << endl;

    divan div(name_, size_, color_, material_, pokritie_);
    div.print();
    cout << endl;

    cout << "Vvedite 1, chtobi vvesti dannie shkafa;" << endl;
    cout << "Vvedite 2, chtobi vvesti dannie stellaga;" << endl;
    cout << "Vvedite 3, chtobi vvesti dannie stola;" << endl;
    cout << "Vvedite 4, chtobi vvesti dannie divana;" << endl;
    cout << "Vvedite 5, zavershit` rabotu programmi." << endl;

    cout <<"Vvodite: ";
    cin >> vibor;
    cout << endl;
    //goto a;
}
    case 5:{
    cout << "Do svidaniya!";
    return 0;
}
}
}
