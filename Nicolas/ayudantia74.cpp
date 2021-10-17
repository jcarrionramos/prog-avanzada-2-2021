#include <iostream>
using namespace std;

class Persona{

};
class Desarrollador{

};
class Profesor{

};
class Ayudante{

};
class Loco : public Persona, public Desarrollador, public Profesor,public Ayudante{
private:
    float libres;
public:
    Loco(): Persona(), Desarrollador(), Profesor(), Ayudante(){

    }
};
