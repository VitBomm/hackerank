#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int countt  = 1;
    for(int i = 0 ; i<n;i++)
    {
        for(int j = 0; j<n-countt;j++)
        {
            cout<<" ";
        }
        for(int m = 0; m < countt;m++)
        {
            cout<<"#";
        }
        countt++;
        cout<<endl;
    }
    return 0;
}
