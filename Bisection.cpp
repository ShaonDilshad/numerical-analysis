//Bisection (root finding)
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;
    float a, b, c, h, tol;
    float f(float x);

    cout<<"enter the lower limit a= ";
    cin>>a; //scanf("%f",&a);
    cout<<"enter the upper limit b= ";
    cin>>b; //scanf("%f",&b);

    if( f(a)*f(b) > 0 )
        cout<<"There is not any real root\n";
    else if(f(a)*f(b) == 0){
        if(f(a)==0 && f(b)==0)
            cout<<"The roots are "<<a<<" and "<<b<<endl; //printf("the roots are %f and %f\n",a,b);
        else if(f(a) == 0)
            cout<<"The root is "<<a<<endl; //printf("the root is %f\n",a);
        else
            cout<<"The root is: "<<b<<endl; //printf("the root is %f\n",b);
    }
    else{
        cout<<"enter tolarance\n";
        cin>>tol; //scanf("%f",&tol);

        do{
            c = (a+b) / 2;
            h = fabs(f(c));
            if(f(a)*f(b) > 0.0)
                a = c;
            else
                b = c;
        }while(h > tol);

        printf("The required root is=%.4f\n",c);
        printf("The functional value f(%.4f)=%.4f\n",c,f(c));
    }

    //Another Way to solve it
    /*for(i=0;;i++)
    {
    x=(a+b)/2.0;
    if(f(a)*f(x)<0)
        b=x;
    else
        a=x;
    if(fabs(f(x))<tol)break;
    }
    printf("the approximate root is %f",x);
    }*/
}


float f(float x)
{
    //add required function here
    return(x*x*x+x*x+x+7);
    // return(x*x*x+x*x-1);
}
