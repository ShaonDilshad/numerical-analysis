#include<bits/stdc++.h>
using namespace std;

main()
{
    int i, n, pp, a[10], pd;
    
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the element: \n";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter PP: ";
    cin>>pp;
    cout<<"Enter PD: ";
    cin>>pd;

    for(i=n-1; i>pp-1; i--)
        a[i+1] = a[i];
    
    a[pp-1] = pd;

    cout<<"Resultant array is: \n";
    cout<<"[ ";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"]";

}
