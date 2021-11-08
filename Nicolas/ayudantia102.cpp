#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>izq;
    vector<int>der;
    vector<int>junto;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            int n;
            cin>>n;
            if (i==0){
                izq.push_back(n);
            }else{
                der.push_back(n);
            }
        }
    }
    sort(izq.begin(), izq.end());
    sort(der.begin(),der.end());
    /*for (int i = 0; i < 4; ++i) {
        cout<<izq[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 4; ++i) {
        cout<<der[i]<<" ";
    }*/

    int pizq=0,pder=0;
    for (int i = 0; i < 8; ++i) {
        if (pizq==4){
            junto.push_back(der[pder]);
            pder++;
        } else if(pder==4){
            junto.push_back(izq[pizq]);
            pizq++;
        }else if (izq[pizq]<der[pder]){
            junto.push_back(izq[pizq]);
            pizq++;
        }else{//der<=iq
            junto.push_back(der[pder]);
            pder++;
        }
    }

    for (int i = 0; i < 8; ++i) {
        cout<<junto[i]<<" ";
    }

    //5-7-4-6
    //3-2-4-5
    return 0;
}
