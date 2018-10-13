#define lli long long int
#include <vector>
#include <iostream>
using namespace std;
lli sum = 0;
lli e;
int main()
{
    int n;
    cin>>n;
    for(int i  = 0 ; i <n;i++)
    {
        cin>>e;
        sum+=e;
    }
    cout<<sum;
    return 0;
}
