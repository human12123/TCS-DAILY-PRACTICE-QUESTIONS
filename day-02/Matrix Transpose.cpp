#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &arr,int n,int m){
    // Column pe loop chalayenge kyuki transpose me column row ban jata hai
    for(int j=0;j<m;j++){
        // Har column ke andar sari rows print karenge
        for(int i=0;i<n;i++){
            // (i,j) ki value transpose me (j,i) ban jati hai
            cout<<arr[i][j]<<" ";
        }
        // Ek row complete ho gayi
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    // Matrix input lena
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Transpose Matrix"<<endl;
    transpose(arr,n,m);
    return 0;
}