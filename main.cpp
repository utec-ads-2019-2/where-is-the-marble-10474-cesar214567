#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    int numero,buscar;
    int contador=1;
    while (cin>>numero>>buscar){
        if (numero==buscar && buscar==0){
            break;
        }
        cout<<"CASE# "<<contador<<":"<<endl;
        vector<int> inicial;
        for (int i=0;i<numero;i++){
            int number;
            cin>>number;
            inicial.push_back(number);
        }
        sort(inicial.begin(),inicial.end());
        for (int i=0;i<buscar;i++){
            int number,contador=0;
            bool temp=false;
            cin>>number; 
            for(auto it:inicial){
                if (it==number){
                    cout<<number<<" found at "<<contador+1<<endl;
                    temp=true;
                    break;
                }
                contador++;
            }
            if(!temp){
                cout<<number<<" not found"<<endl;
            }
        }
        contador++;
    }
    
}
