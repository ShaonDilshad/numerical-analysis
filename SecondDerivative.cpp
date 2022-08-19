//SecondDerivative
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i, j, n;
    float x[100], y[100], d[100][100], e[100][100], h, u, a, b, sum=0.0, tsum;
    float f(float u, int n, int i);
    float df(float u, int n);
    int fact(int n);

    cout<<"enter the number of data= ";
    cin>>n;
    cout<<"enter the initial value of x= ";
    cin>>x[0];
    cout<<"enter the step size h= ";
    cin>>h;

    for(i=1; i<n; i++)
        x[i] = x[i-1] + h;

    for(i=0; i<n; i++)
        cin>>y[i];

    for(i=0; i<n; i++)
        d[0][i] = y[i];

    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            d[i][j] = d[i-1][j+1] - d[i-1][j];
            printf("d[%d][%d]=%f\n\n",i,j,d[i][j]);
        }
        cout<<"\n"<<endl;
    }

    for(j=0; j<n; j++){
        b = x[j];
        u = (b-x[0]) / h;
        sum=0.0;
        for(i=1; i<n; i++)
            sum = sum + df(u,i) * d[i][0] / fact(i);
        y[j] = sum / h;
    }

    for(i=0; i<n; i++)
        e[0][i] = y[i];
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            e[i][j] = e[i-1][j+1] - e[i-1][j];
            printf("e[%d][%d]=%f\n\n",i,j,e[i][j]);
        }
        cout<<"\n"<<endl;
    }

    cout<<"enter the differentiating point a= ";
    cin>>a;

    u = (a - x[0]) / h;
    sum = 0.0;
    for(i=1; i<n; i++)
        sum = sum + df(u,i) * e[i][0] / fact(i);
    tsum = sum / h;
    cout<<tsum<<endl;
}


float f(float u, int n, int i){
    int j;
    float prod=1.0;
    for(j=0; j<i-1; j++)
        prod = prod * (u-j);
    for(j=i; j<n; j++)
        prod = prod * (u-j);
    return(prod);
}

float df(float u, int n){
    int i;
    float sum = 0.0;
    for(i=1; i<=n; i++)
        sum = sum + f(u,n,i);
    return(sum);
}

int fact(int m){
    int j;
    float prod=1.0;
    for(j=1; j<=m; j++)
        prod = prod * j;
    return(prod);
}
