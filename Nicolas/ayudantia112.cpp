#include <iostream>
#include <stack>
using namespace std;

int main(){

    char opcion='d';
    stack<char>juego;

    //string (nombre=="")
    //char (letra =='')

    while (opcion!='f'){
        cout<<"Ingrese o para agregar una o a la pila"<<endl<<
        "Ingrese b para hacer estallar todas las o"<<endl
        <<"Ingrese d para duplicar las o"<<endl
        <<"Ingrese f para terminar el juego"<<endl;
        cin>>opcion;
        if (opcion=='o'){
            juego.push('o');
            int largo=juego.size();
            for (int i = 0; i < largo; ++i) {
                cout<<"o";
            }
            cout<<endl;
        }else if(opcion=='b'){
            int largo=juego.size();
            for (int i = 0; i < largo; ++i) {
                juego.pop();
            }
        }else if(opcion=='d'){
            int largo=juego.size();
            //50 -> 0 -> 100
            //50 -> 100
            for (int i = 0; i < largo; ++i) {
                juego.push('o');
            }
            int largo2=juego.size();
            for (int i = 0; i < largo2; ++i) {
                cout<<"o";
            }
            cout<<endl;
        }else if(opcion=='f'){

        }else{
            cout<<"Caracter incorrecto"<<endl;
        }
        cout<<endl;
    }
    //oooboodf
    int largo=juego.size();
    for (int i = 0; i < largo; ++i) {
        cout<<juego.top();
        juego.pop();
    }

    return 0;
}
