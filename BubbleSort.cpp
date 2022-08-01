//Sorting with Bubble Sort | O(n2) & O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,temp,n,a[100];

    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            if(a[j]>=a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=1;i<=n;i++)
        cout<<a[i]<<'\n';

    cout<<"Descending"<<endl;
    for(i=1;i<=n;i++)
        cout<<a[n+1-i]<<'\n';

    return 0;
}
