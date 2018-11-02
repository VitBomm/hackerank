#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <cstring>
#include <map>
using namespace std;

void solved()
{
    map<string,int> mapp;
    int n,i;
    int count = 0;
    string str,strtemp;
    string comp;
    cin>>n;
    while(n--)
    {
        cin>>str>>comp;
            if(str == "add")
            {
                for(i = 0; i<comp.length();i++)
                {
                        strtemp += comp[i];
                        mapp[strtemp]++;
                }
                strtemp.clear();
            }
            else
            {
                cout<<mapp[comp]<<endl;
            }
    }
}
int main()
{
    solved();
    return 0;
}
