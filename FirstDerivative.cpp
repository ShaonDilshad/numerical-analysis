//Differential Forward 1st Derivative
#include<bits/stdc++.h>
using namespace std;

#include<stdio.h>
#define N 20
main()
{
    int i, j, n;
    float x0, y[N], d[N][N], u, a, h, sum=0.0;
    float f(float u, int n, int i);
    float df(float u, int n);
    int fact(int n);

    cout<<"enter the number of data= ";
    cin>>n;
    cout<<"enter the initial value of x= ";
    cin>>x0;
    cout<<"enter the step size h= ";
    cin>>h;

    cout<<"enter the value of y\n";   
    for(i=0; i<n; i++)
        cin>>y[i];

    for(i=0; i<n; i++){
        d[0][i] = y[i];
        printf("d[0][%d] = %f\n", i, d[0][i]);
    }

    for(i=1; i<n; i++)
        for(j=0; j<n-i; j++){
            d[i][j] = d[i-1][j+1] - d[i-1][j];
            printf("d[%d][%d] = %f\n", i, j, d[i][j]);
        }

    cout<<"enter the differentiating point a= ";
    cin>>a;

    u = (a-x0) / h;
    for(i=1; i<n; i++)
        sum = sum + df(u,i) * d[i][0] / fact(i);
    
    sum = sum/h;
    printf("The required differentiating value at %f is %f", a, sum);

}


float f(float u,int n,int i)
{
    int j;
    float prod=1.0;
    for(j=0; j<i-1; j++)
        prod = prod * (u-j);
    for(j=i; j<n; j++)
        prod = prod * (u-j);
    return(prod);
}

float df(float u, int n)
{
    int i;
    float sum = 0.0;
    for(i=1; i<=n; i++)
        sum = sum + f(u, n, i);
    return(sum);
}

int fact(int n)
{
    int i,prod=1;
    for(i=1; i<=n; i++)
        prod = prod * i;
    return(prod);
}
