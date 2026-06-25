#include<bits/stdc++.h>
using namespace std;

void diagonalTraversal(vector<vector<int>> &arr,int n,int m){

    // Pehle first row ke har element se diagonal start karenge tabhi sum ayega
    for(int col=0;col<m;col++){
        int i=0;
        int j=col;
        // Jab tak matrix ke andar hain
        while(i<n && j>=0){
            cout<<arr[i][j]<<" ";
            // Ek row niche
            i++;
            // Ek column left
            j--;
        }
        cout<<endl;
    }
    // Ab first column ke second row se diagonal start krnge
    // Row 0 skip krnge kyuki uske diagonals upar print ho chuke hain
    for(int row=1;row<n;row++){
        int i=row;
        int j=m-1;
        // Diagonal complete hone tak loop chalega
        while(i<n && j>=0){
            cout<<arr[i][j]<<" ";
            // Niche aur left me move karenge
            i++;
            j--;
        }

        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    // Matrix input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Diagonal Traversal"<<endl;
    diagonalTraversal(arr,n,m);
    return 0;
}