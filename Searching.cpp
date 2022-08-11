#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100], n, i, num, c;
    cout<<"Enter the size of array\n";
    cin>>n;

    cout<<"Elements are: \n";
    for(i = 0 ; i < n ; i++){
        cin>>a[i];
    }

    cout<<"Enter the search element\n";
    cin>>num;
    c=0; //flag element

    for(i = 0 ; i < n ; i++){
        if(a[i] == num){
            c = 1;
            cout<<num<<" is found at position "<<i+1<<endl;
            break;
        }
    }
    if(c == 0){
        cout<<num<<" is not found in the array"<<endl;
    }

    return 0;
}
