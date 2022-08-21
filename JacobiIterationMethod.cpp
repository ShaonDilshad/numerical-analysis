//(system of linear equation): Jacobi Iteration Method
#include<bits/stdc++.h>
using namespace std;
#define N 20

main()
{
    int i, j, n;
    float a[N][N], b[N], x[N];
    void jac(int n, float a[N][N], float b[N], float x[N]);

    cout<<"enter the number of equation n= ";
    cin>>n;
    cout<<"enter the coefficient matrix a=\n";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
    
    cout<<"enter the constant matrix b=\n";
    for(i=1; i<=n; i++)
        cin>>b[i];

    for(i=1; i<=n; i++)
        x[i] = 0;

    for(j=1; j<=100; j++){
        jac(n, a, b, x);
    }

    cout<<"The required approximate solution \n";
    for(i=1; i<=n; i++)
        printf("x[%d]=%f\n", i, x[i]);
}


void jac(int n, float a[N][N], float b[N], float x[N])
{
    int i, j;
    float sum, y[N];
    for(i=1; i<=n; i++)
        y[i] = x[i];

    for(i=1; i<=n; i++)
    {
        sum = b[i];
        for(j=1; j<=n; j++)
        {
            if(j == i) continue;
            sum = sum - (a[i][j] * y[j]);
        }
        x[i] = sum / a[i][i];
    }
}