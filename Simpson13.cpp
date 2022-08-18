//Simpson 1/8 rule
#include<bits/stdc++.h>
using namespace std;
#define N 100

main()
{
    int i, n;
    float a, b, x[N], y[N], h, sum=0.0, sum1=0.0, iv;
    float f(float);

    cout<<"enter the number of subdivision n= ";
    cin>>n;
    cout<<"enter the lower limit a= ";
    cin>>a;
    cout<<"enter the upper limit b= ";
    cin>>b;

    h = (b-a) / n;
    for(i=0; i<=n; i++)
        x[i] = a+ i*h;

    for(i=0; i<=n; i++)
        y[i] = f(x[i]);

    for(i=1; i<n; i++)
    {
        if(i%2 == 0)
        sum = sum + y[i];
        else
            sum1 = sum1 + y[i];
    }

    iv = (h/3) * (y[0]+ y [n] + 4*sum1 + 2*sum);
    cout<<"the required integrating value is "<<iv<<endl;
    //printf("the required integrating value is %f\n",iv);

}


float f(float x)
{
    //add required function here
    return(sin(x));
}
