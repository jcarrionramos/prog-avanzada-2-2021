#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vectorsito;
    vectorsito.push_back(5);
    vectorsito.push_back(3);
    vectorsito.push_back(2);
    vectorsito.push_back(1);
    //push - pop
    //push_back - pop_back

    //0->1er 1->2do 2->3ro
    cout<<vectorsito.front()<<" - "<<vectorsito.back()<<" - "<<vectorsito.at(2)<<" - "<<vectorsito.size()<<endl;
    vectorsito.pop_back();
    cout<<vectorsito.front()<<" - "<<vectorsito.back()<<" - "<<vectorsito[2]<<" - "<<vectorsito.size()<<endl;
    return 0;
}
