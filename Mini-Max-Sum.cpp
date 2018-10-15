#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long int> v;
int main()
{
    long long int e;
    for(int i = 0 ; i<5;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    sort(v.begin(),v.end());
    long long int mMin = 0;
    long long int mMax = 0;
    for(int i= 0 ; i<4;i++)
    {
        mMin += v[i];
    }
    for(int i = 1 ; i <5;i++)
    {
        mMax += v[i];
    }
    cout<<mMin<<" "<<mMax;
    return 0;
}
