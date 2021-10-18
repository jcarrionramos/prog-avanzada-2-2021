#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>pilita;
    pilita.push(5);
    pilita.push(3);
    pilita.push(4);
    cout<<pilita.empty()<<" "<<pilita.size()<<endl;
    int largo=pilita.size();
    for (int i = 0; i < largo; ++i) {
        cout<<pilita.top()<<endl;
        pilita.pop();
    }
    //i<3 0
    //i<2 1
    //i<1 2
    cout<<pilita.empty()<<endl;

    return 0;
}