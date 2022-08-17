//Newton Rapson (root finding)
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;
    float a, x, tol, h;
    float f(float);
    float df(float);

    cout<<"Enter the initial approximation: ";
    cin>>a;

    if(df(a) == 0)
        printf("The initail guess is not suitable\n");
    else{
        cout<<"Enter the tolarance: ";
        cin>>tol;

        do
        {
            x = a - f(a)/df(a);
            h = fabs(x-a);
            a = x;
            cout<<x<<endl;
        }while(h>tol);

        printf("The approximate root is %f\n",x);
        printf("f(%f)=%f\n",x,f(x));
    }
}

float f(float x)
{
    return(pow(x,3)-2*x-5);
}
float df(float x)
{
    return(3*pow(x,2)-2);
}
