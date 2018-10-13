#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,e;
    int sum = 0;
    cin>>n;
    for(int i = 0 ; i <n;i++)
    {
        cin>>e;
        sum += e;
    }
    cout<<sum;
    return 0;
}
