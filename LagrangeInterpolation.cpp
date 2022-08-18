//Lagrange Interpolation
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i, j, n;
    float x[20], y[20], p[20], a, sum=0.0;

    cout<<"enter  the number of data n= ";
    cin>>n;
    cout<<"enter  the interpolated point a= ";
    cin>>a;
    cout<<"enter  the value of x & y \n";
    for(i=0; i<n; i++)
        cin>>x[i]>>y[i]; //scanf("%f%f",&x[i],&y[i]);

    for(i=0; i<n; i++)
    {
        p[i] = 1;
        for(j=0; j<n; j++)
            if(i != j)
                p[i] = p[i] * (a-x[j]) / (x[i]-x[j]);
    }

    for(i=0; i<n; i++)
        sum = sum + p[i] * y[i];

    printf("the required value of y(%f)=%f\n",a,sum);
}
