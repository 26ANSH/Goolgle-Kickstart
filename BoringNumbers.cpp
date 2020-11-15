// KickStart
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int isEven(int n)
{
return (!(n & 1));
}
bool boring (string s)
{
    long int len = s.length();

    if(len == 1 && isEven(stoi(s)) )
        return false;
    else if(len == 1)
        return true;
    
    
    for(int i = 0 ;i<len ; i+=2)
    {
        // odd checking 0 2 4
        if(isEven(stoi(s.substr(i,1))) == true )
        {
            // cout<<isEven(stoi(s.substr(i,1)))<<endl;
            // cout<<i<<" : OC : "<<stoi(s.substr((i),1))<<endl;
            return false;
        }
    }
    
      for(int i = 1 ;i<len; i+=2)
      {
          //even checking 1 3 5
          if(!(isEven(stoi(s.substr(i,1)))))
          {
              // cout<<i<<" : EC : "<<stoi(s.substr(i,1))<<endl;
              return false;
          }
    }
    return true;
}
int main(void)
{

    int test;
    cin>>test;

    for (int t = 0; t < test; ++t)
    {
        long long int l,r;
        cin>>l>>r;

        int ans = 0;

        for(;l<=r;l++)
        {
            if(boring(to_string(l)))
            {
                // cout<<l<<" ";
                ans++;
            }
        }

        cout<<"Case #"<<(t+1)<<": "<<ans<<endl;
    }

    return 0;
}
