//Matrix Calculation : addition, substraction & multiplication

#include <bits/stdc++.h>
using namespace std;

#define N 10

int main()
{
    int i, j, m, n, k, p, q;
    float a[N][N], b[N][N], c[N][N], d[N][N], e[N][N];

    cout<<"enter the order of the matrices a= \n";
    cin>>m>>n;      //scanf("%d%d",&m,&n);
    cout<<"enter the order of the matrices b= \n";
    cin>>p>>q;      //scanf("%d%d",&p,&q);

    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added or subtracted!";
        exit(0);
    }	

    cout<<"enter the elements of matrix a\n";
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            //scanf("%f", &a[i][j]);
            cin>>a[i][j];
        }
    }

    cout<<"enter the elements of matrix b\n";
    for(i=1; i<=p; i++){
        for(j=1; j<=q; j++){
            //scanf("%f", &b[i][j]);
            cin>>b[i][j];
        }
    }


    //Calculation Addition and Substraction
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            c[i][j] = a[i][j] + b[i][j];
            d[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("the matrices addition=\n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            //printf("%f\t", c[i][j]);
            cout<<'\t'<<c[i][j]<<'\t';
        }
        //printf("\n\n");
        cout<<"\n\n";
    }

    printf("the matrices subtraction=\n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            //printf("%f\t", d[i][j]);
            cout<<'\t'<<d[i][j]<<'\t';
        }
        //printf("\n\n");
        cout<<"\n\n";
    }

    //Matrix Multiplication
    if(n==p){
        for(i=1; i<=m; i++){
            for(j=1; j<=q; j++){
                c[i][j]=0.0;
                for(k=1; k<=n; k++){
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("the matrices multiplication are=\n");
        for(i=1; i<=m; i++){
            for(j=1; j<=q; j++){
                printf("%.2f\t", c[i][j]);
                //cout<<c[i][j]<<'\t';
            }
            //printf("\n\n");
            cout<<"\n\n";
        }
    }
    else{
        cout<<"the matrices multiplication are not possible"<<endl;
    }

    return 0;
}
