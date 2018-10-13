#define lli long long int
#include <vector>
#define MAX 100
#include <iostream>
using namespace std;
int matrix[MAX][MAX];
int main()
{
    int n,e;
    int left = 0;
    int right = 0;
    cin>>n;
    for(int i = 0 ; i <n;i++)
    {
        for(int j = 0; j<n;j++)
        {
            cin>>e;
            matrix[i][j] = e;
        }
    }
    int k = 0;
    int m = 0;
    while (k<n) {
        left += matrix[k][m];
        k++;
        m++;
    }
    k = n-1;
    m = 0;
    while(k>=0)
    {
        right += matrix[k][m];
        k--;
        m++;
    }
    cout<<abs(left-right);
    return 0;
}
