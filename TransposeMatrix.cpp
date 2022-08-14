// Transpose Matix 
#include<bits/stdc++.h>
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

    //Transpose Matrix
    cout<<"The Transpose Matrix is: "<<endl;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
        cout<<'\t'<<a[j][i]; //printf("%f\t",a[j][i]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }

    return 0;
}