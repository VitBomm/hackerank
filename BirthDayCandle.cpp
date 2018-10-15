#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int e,n;
int main()
{
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    sort(v.begin(),v.end(),greater<int>());
    int countt = 1;
    int value = v[0];
    for(int i = 1 ; i <n;i++)
    {
        if(v[i] == value)
        {
            countt++;
        }
        else
        {
            break;
        }
    }
    cout<<countt;
    return 0;
}
