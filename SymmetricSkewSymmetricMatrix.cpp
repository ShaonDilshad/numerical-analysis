//Symmetric and Skew-Symmetric Matix

#include<bits/stdc++.h>2
using namespace std;

int main()
{
    int i, j, m, n;
    float a[10][10], b[10][10], c[10][10];

    cout<<"Enter the row and column of the matrix"<<endl;
    cin>>m>>n; //scanf("%d%d",&m,&n);

    cout<<"Enter the elements of the matrix"<<endl;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            cin>>a[i][j]; //scanf("%f",&a[i][j]);
        }
    }

    cout<<"Print the entered matrix: "<<endl;
    for(i=1; i<=m; i++){
        for(j=1; j<=n;j++){
            cout<<'\t'<<a[i][j];//printf("\t%f",a[j][i]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }

    //calculation
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            b[i][j] = .5 * (a[i][j] + a[j][i]);
            c[i][j] = .5 * (a[i][j] - a[j][i]);
        }
    }

    //Symmetric Matrix
    cout<<"Symmetric matrix are: "<<endl;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            cout<<'\t'<<b[i][j]; //printf("\t%f",b[i][j]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }

    //Skew-Symmetric Matrix
    cout<<"Skew-Symmetric matrix are: "<<endl;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            cout<<'\t'<<c[i][j]; //printf("\t%f",c[i][j]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }

    return 0;
}