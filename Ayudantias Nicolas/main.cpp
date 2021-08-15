#include <iostream>

using namespace std;

class Personas{
private:
    int edad;
public:
    Personas(int edad){
        this->edad=edad;
    }
    int getEdad(){
        return edad;
    }
};

int main() {

    int edad;
    cin>>edad;
    cout<<edad;
    Personas *nico = new Personas(edad);
    nico->getEdad();

    return 0;
}
