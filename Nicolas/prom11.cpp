#include <iostream>
using namespace std;

class Ejemplo{
private:
    int num;
public:
    Ejemplo(int num){
        this->num=num;
    }

    void setNum(int num){
        this->num=num;
    }

    int getNum(){
        return num;
    }
};

int main() {

    int num;
    cin>>num;

    Ejemplo *nico= new Ejemplo(num);

    cout<<nico->getNum();


    int num2;
    cin>>num2;

    nico->setNum(num2);
    cout<<nico->getNum();

    return 0;
}
