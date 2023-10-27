#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x<=100 && x>=1){
       if ((x%4)==0){
        cout<<"YES"<<endl;}
        else if((x%6)==0){
            cout<<"YES"<< endl;}
        else if((x%10)==0){
            cout<<"YES"<< endl;}
        else if((x%14)==0){
            cout<<"YES"<< endl;}
        else if((x%18)==0){
            cout<<"YES"<< endl;}
        else if((x%22)==0){
            cout<<"YES"<< endl;}
        
              
    else{
        cout<< "NO" << endl;
    } 
    
    }
    return 0;
}
