//False Positon (root finding)
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;
    float a,b,x,tol;
    float f(float);

    cout<<"enter the lower limit a= ";
    cin>>a;
    cout<<"enter the upper limit b= ";
    cin>>b;

    if(f(a)*f(b) == 0)
    {
        if(f(a)==0 && f(b)==0)
            cout<<"The roots are: "<<a<<"and "<<b<<endl;
            else if(f(a)==0)
            cout<<"The root is: "<<a<<endl;
            else
            cout<<"The root is: "<<b<<endl;
    }
    else if(f(a)*f(b) > 0)
        cout<<"There may not any real root\n";
    else
    {
        cout<<"Enter tolarance\n";
        cin>>tol;
        for(i=0;;i++)
        {
            x = a-f(a) * (b-a)/(f(b)-f(a));
            if(f(a)*f(x) < 0)
                b=x;
            else
                a=x;
            if(fabs(f(x))<tol)break;
        }
        cout<<"The approximate root is: "<<x;
    }
    //Another way to solve it
    /*do{
        x=a-f(a)*(b-a)/f(b)-f(a);
        h=fabs(x-a);//declace h
        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
    }while(h>tol)*/

}
float f(float x)
{
    //add required function
    return(exp(-x)-10*x);
    // return(2*x-cos(x)-3);
}
