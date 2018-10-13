#include <iostream>
#include <vector>
using namespace std;
vector<int> a,b;
int e;
int scorea = 0;
int scoreb = 0;
int main()
{
    for(int i = 0 ; i < 3;i++)
    {
        cin>>e;
        a.push_back(e);
    }
        for(int i = 0 ; i < 3;i++)
    {
        cin>>e;
        b.push_back(e);
    }
    for(int i = 0 ; i<3;i++)
    {
        if(a[i] > b[i])
        {
            scorea++;
        }
        else if(b[i]> a[i])
        {
            scoreb++;
        }
    }
    cout<<scorea<<" "<<scoreb; 
    return 0;
}
