#include <iostream>
#include <vector>
using namespace std;

int main(){

    string palabra;
    cin>>palabra;

    vector<char>reves;
    int n=palabra.size();
    for (int i = 0; i < n; ++i) {
        reves.push_back(palabra[n-1-i]);
    }
    for (int i = 0; i < n; ++i) {
        cout<<reves[i]<< " - ";
    }

    return 0;
}

