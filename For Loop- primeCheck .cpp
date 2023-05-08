#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
using namespace std;


void isPrime(int n) {
    if(n==1){
        cout<<"No"<<endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        // code here
        if(n%i==0){
            cout<<"No"<<endl;
            return;
        }
    }
cout <<"Yes"<< endl;
}