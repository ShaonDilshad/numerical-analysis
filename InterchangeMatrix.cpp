//Row Column Interchange in Matrix
#include<bits/stdc++.h>
using namespace std;

int main()
{
    static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;

    cout<<"Enter no. of rows :: ";
    cin>>m; //scanf("%d", &m);
    cout<<"Enter no. of cols :: ";
    cin>>n; //scanf("%d",&n);

    cout<<"Enter values to the matrix :: \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d] value :: ", i, j);
            cin>>array1[i][j]; //scanf("%d", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }

    cout<<"\nThe given matrix is:-> \n";
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout<<'\t'<<array1[i][j]; //printf("\t%d", array1[i][j]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }


    cout<<"Enter row number to be exchanged : ";
    cin>>a;  //scanf("%d", &a);
    cout<<"Enter other row number to be exchanged with : ";
    cin>>b; // scanf("%d",&b);

    for (i = 0; i < m; ++i)
    {
        /*  first row has index is 0 */
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }

    cout<<"Enter col number to be exchanged : ";
    cin>>p; //scanf("%d", &p);
    cout<<"Enter other col number to be exchanged with : ";
    cin>>q; //scanf("%d",&q);

    for (i = 0; i < n; ++i)
    {
        /*  first column index is 0 */
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
    }

    cout<<"\nThe matix after interchanging the two rows ::  \n";
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout<<'\t'<<array1[i][j]; //printf("\t%d", array1[i][j]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }

    cout<<"\nThe matix after interchanging the two columns :: \n";
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout<<'\t'<<array2[i][j]; //printf("\t%d", array2[i][j]);
        }
        cout<<"\n\n"; //printf("\n\n");
    }

    return 0;
}
