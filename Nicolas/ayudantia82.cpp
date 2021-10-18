#include <iostream>
using namespace std;

int main(){

    string pare;
    cin>>pare;
    int izq=0,der=0;
    for (int i = 0; i < pare.size(); ++i) {
        if (pare[i]=='('){
            izq++;
        }else if(pare[i]==')'){
            der++;
        }
    }
    if (izq==der){
        cout<<"Balanceado"<<endl;
    }else{
        cout<<"No se encuentra balanceado"<<endl;
    }

    return 0;
}