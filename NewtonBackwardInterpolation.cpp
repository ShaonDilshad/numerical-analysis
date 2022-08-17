//Newton Backward Interpolation
#include<bits/stdc++.h>
using namespace std;
#define N 50

main()
{
    int i, j, n;
    float x0, h, u, a, x[N], y[N], d[N][N], sum=0.0;
    float f(int n,float u);
    int fact(int n);

    cout<<"enter the number of data n= ";
    cin>>n;
    cout<<"enter the initial value of x: ";
    cin>>x0;
    cout<<"enter the step size: ";
    cin>>h;

    for(i=0; i<n; i++)
        x[i] = x0 + i*h;
    
    cout<<"enter the values of y: \n";
    for(i=0; i<n; i++)
        cin>>y[i];
    
    for(i=0; i<n; i++)
        d[0][i] = y[i];

    cout<<"enter the interpolate point a= ";
    cin>>a;

    u = (a - x[n-1]) / h;

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            d[i][j] = d[i-1][j+1] - d[i-1][j];
            printf("d[%d][%d]=%f\n\n", i, j, d[i][j]);
        }
        cout<<"\t";
    }

    for(i=1; i<n; i++)
        sum = sum + f(i,u) * d[i][n-i-1]/fact(i);

    sum=sum+y[n-1];
    printf("The required value at %f is %f", a, sum);
}

int fact(int n)
{
    int i, prod=1;
    for(i=1; i<=n; i++)
        prod = prod * i;
    return(prod);
}
float f(int n,float u)
{
    int i;
    float prod=1.0;
    for(i=0; i<n; i++)
        prod = prod * (u+i);
    return(prod);
}
