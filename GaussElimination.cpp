// Gauss Elimination
#include<bits/stdc++.h>
using namespace std;
#define N 20

main()
{
    int i, j, k, m, n;
    float a[N][N] ,b[N], ag[N][N];
    int pivot(int i, int m, int n, float a[][N]);
    void R_ij(int i, int j, int m, int n, float a[][N]);
    void R_ijk(int i, int j, float k, int m, int n, float a[][N]);

    cout<<"enter the number of equation: ";
    cin>>m;
    cout<<"enter the coefficient matrix\n";
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j];

    cout<<"the coefficient matrix\n";
    for(i=1; i<=m; i++){
        for(j=1; j<=m; j++)
            cout<<"\t"<<a[i][j];    //printf("%f\t",a[i][j]);
            cout<<"\n\n";
        }

    cout<<"enter the constant matrix\n";
    for(i=1; i<=m; i++)
        cin>>b[i];

    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
                ag[i][j] = a[i][j];
    
    n = m + 1;

    for(i=1; i<=m; i++)
        ag[i][n] = b[i];
    
    cout<<"the augmented matrix\n";
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++)
            cout<<'\t'<<ag[i][j];   //printf("%f\t",ag[i][j]);
            cout<<"\n\n";
        }

    for(j=1; j<m; j++)
    {
        i = pivot(j, m, n, ag);
        R_ij(j, i, m, n, ag);

        if(fabs(ag[j][j]) > 0.0)
            for(k = j+1; k<=m; k++)
                R_ijk(k, j, -ag[k][j] / ag[j][j], m, n, ag);
    }

    for(j=2; j<=m; j++)
        for(k=j-1; k>=1; k--)
            R_ijk(k, j, -ag[k][j] / ag[j][j], m, n, ag);
    
    cout<<"The aproximate solution is\n";
    for(i=1; i<=m; i++)
        printf("x[%d]=%f\n", i, ag[i][n] / ag[i][i]);
}


int  pivot(int i, int m, int n, float a[][N])
{
    int j, k=i;
    float temp = fabs(a[i][i]);
    for(j=i+1; j<=m; j++)
        if(temp<fabs(a[j][i])){
            k = j;
        temp = fabs(a[j][i]);
    }
    return(k);

}
void R_ij(int i, int j, int m, int n, float a[][N])
{
    int k;
    float temp;
    for(k=1; k<=n; k++)
    {
        temp = a[i][k];
        a[i][k] = a[j][k];
        a[j][k] = temp;
    }
}

void R_ijk(int i, int j, float k, int m, int n, float a[][N])
{
    int p;
    for(p=1; p<=n; p++)
        a[i][p] = a[i][p] + k * a[j][p];
}