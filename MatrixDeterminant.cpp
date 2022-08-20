//Determinant Matrix
#include<bits/stdc++.h>
using namespace std;
#define N 20

main()
{
    int i, j, k, m, c=1;
    float a[N][N], det=1.0;
    int pivot(int i, int m, float a[][N]);
    void R_ij(int i, int j, int m, float a[][N]);
    void R_ijk(int i, int j, float k, int m, float a[][N]);

    cout<<"enter the number of equation m= ";
    cin>>m;
    cout<<"enter the coefficient matrix a= ";

    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j];

    for(j=1; j<m; j++)
    {
        i = pivot(j, m, a);
        if(i != j) c++;
        R_ij(j, i, m, a);

        for(k=j+1; k<=m; k++)
            if(fabs(a[j][j]) > 0.0)
                R_ijk(k, j, -a[k][j] / a[j][j], m, a);
    }

    for(i=1; i<=m; i++)
        det = det * a[i][i];
    det = det * pow(-1, c+1);
        printf("det=%f\n", det);
}


int pivot(int i, int m, float a[][N])
{
    int j, k=i;
    float temp = fabs(a[i][i]);
    for(j=i+1; j<=m; j++)
        if(temp < fabs(a[j][i]))
        {
            k = j;
            temp = a[j][i];
        }
    return(k);
}

void R_ij(int i, int j, int m, float a[][N])
{
    int k;
    float temp;
    for(k=1; k<=m; k++)
    {
        temp = a[i][k];
        a[i][k] = a[j][k];
        a[j][k] = temp;
    }
}

void R_ijk(int i, int j, float k, int m, float a[][N])
{
    int p;
    for(p=1; p<=m; p++)
        a[i][p] = a[i][p] + k * a[j][p];
}