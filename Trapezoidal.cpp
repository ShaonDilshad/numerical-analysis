//Trapeziodal..
#include<bits/stdc++.h>
using namespace std;
#define N 100

main()
{
    int i, n;
    float a, b, x[N], y[N], h, sum=0.0, iv;
    float f(float);

    cout<<"Enter the number of subdivision: ";
    cin>>n;
    cout<<"Enter the lower limit: ";
    cin>>a;
    cout<<"Enter the upper limit: ";
    cin>>b;

    h=(b-a)/n;

    for(i=0; i<=n; i++)
        x[i] = a + i*h;
    for(i=0; i<=n; i++)
        y[i] = f(x[i]);

    for(i=1; i<n; i++)
        sum = sum + y[i];

    iv = (h/2.0) * (y[0] + y[n] + 2*sum);
    printf("The required integrating value is %f\n",iv);
    cout<<iv<<endl;

}

float f(float x)
{
    //add required function here
    return(pow(x,4));
    //return(x*x+1); 
}
