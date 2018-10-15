#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
double n,e;
double positive =0;
double negative = 0;
double zero = 0;
int main()
{
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {        cin>>e;
        if(e>0)
        {
            positive++;
        }
        else if(e<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    cout<<setprecision(6)<<(positive/n);
    cout<<endl;
    cout<<setprecision(6)<<(negative/n);
    cout<<endl;
    cout<<setprecision(6)<<(zero/n);
    return 0;
}
