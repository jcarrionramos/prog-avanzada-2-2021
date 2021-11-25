#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    map<int,vector<int>>lista;
    vector<int>numeros;
    /*
    vector<int>uno;
    uno.push_back(1);
    uno.push_back(2);
    uno.push_back(7);
    vector<int>dos;
    dos.push_back(20);
    dos.push_back(25);
    dos.push_back(30);
    vector<int>tres;
    tres.push_back(2);
    tres.push_back(4);
    tres.push_back(7);
    tres.push_back(9);
    lista.insert({8,uno});
    lista.insert({12,dos});
    lista.insert({18,tres});*/
    map<int,vector<int>>::iterator itr;
    for (itr = lista.begin(); itr !=lista.end(); itr++) {
        numeros.push_back(itr->first);
        for (int i = 0; i < itr->second.size(); ++i) {
            numeros.push_back(itr->second[i]);
        }
    }
    for (int i = 0; i < numeros.size(); ++i) {
        cout<<numeros[i]<<" ";
    }
}