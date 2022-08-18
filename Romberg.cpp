//Romberg
#include<bits/stdc++.h>
using namespace std;
#define N 20

main()
{
    int j, k, n;
    float a, b, t[N][N], h;
    float f(float);
    float trap(int j, float h, float a, float b);

    cout<<"enter the lower limit a= ";
    cin>>a;
    cout<<"enter the upper limit b= ";
    cin>>b;
    cout<<"enter the number of subdivision= ";
    cin>>n;
    
    h = b - a;

    for(j=1; j<=n; j++)
    {
        t[j][1] = trap(j, h, a, b);
        for(k=2; k<=n; k++)
            t[j][k] = t[j][k-1] + (t[j][k-1] - t[j-1][k-1]) / (pow(4,(k-1)) - 1);
        h=h/2;
    }
    cout<<"the required value= "<<t[n][n]<<endl;
    //printf("the required value=%f",t[n][n]);
}


float f(float x)
{
    return(1 / (1+x));
}

float trap(int j,float h,float a,float b)
{
    int i;
    float sum=0.0;
    for(i=1; i<=pow(2,j-1); i++)
        sum = sum + f(a + i*h);
    return((h/2) * (f(a) + f(b) + 2*sum));
}
