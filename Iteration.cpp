//Iteration (root finding)
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;
    float x0,x1,tol;
    float f(float);
    float df(float);

    cout<<"Enter the value of x0: ";
    cin>>x0;

    if(df(x0)>=1)
        cout<<"The value of x0 is not suitable\n";
    else
    {
        cout<<"Enter the tolarance: ";
        cin>>tol;

        do
        {
            x1 = f(x0);
            x0 = x1;
        }while(fabs(x0-f(x0)) > tol);

        cout<<"The approximate root is: "<<x0<<endl;
    }
}


float f(float x)
{
    return(3*x-1-cos(x));
    //return(1/sqrt(1+x));
}
float df(float x)
{
    return(3+sin(x));
    //return(-1.0/(2*pow((1+x),1.5)));
}
