#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Producto{

};

int main(){
    queue<stack<Producto*>>fila;
    fila.front().top()->getNombre();
}