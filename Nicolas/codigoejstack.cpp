#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>pilita;
    pilita.push(5);
    pilita.push(3);
    pilita.push(4);
    cout<<pilita.top()<<endl;
    pilita.pop();
    cout<<pilita.top()<<endl;
    pilita.pop();
    cout<<pilita.top()<<endl;
    pilita.pop();

    return 0;
}