#include <iostream>
#include <queue>
using namespace std;
priority_queue<long long int> q;
int main()
{
    long long int e,n,kq = 1;
    int dem = 0;
    cin>>n;
    vector<long long int> v;
    vector<long long int> result;
    queue<long long int> q1;
    long long int value;
    for(int i = 0 ; i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    result.resize(n);
    for(int i = 0 ; i<n;i++)
    {
        kq = 1;
        q.push(v[i]);
        dem = 0;
        if(q.size()<3)
        {
            result[i] = -1;
            continue;
        }
        while (dem<3) {
            value = q.top();
            kq *= value;
            q.pop();
            q1.push(value);
            dem++;
        }
        result[i] = kq;
        while (!q1.empty()) {
            q.push(q1.front());
            q1.pop();
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<result[i]<<endl;
    }
    /*
    2 8 5 1 10 5 9 9 3 5
    10
    2 8 5 1 10 5 9 9 3 5
    */
return 0;
}
