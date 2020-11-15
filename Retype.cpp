// KickStart
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(void)
{

	int test;
	cin>>test;

	for (int t = 0; t < test; ++t)
	{
		long long int n,k,s;
		cin>>n>>k>>s;

		long long int restart = (k-1) + 1 + n; 
		long long int reback  = (k-1) + (k-s) + (n-s+1);
 
		long long int ans = (restart>=reback) ? reback : restart;

		cout<<"Case #"<<(t+1)<<": "<<ans<<endl;
	}

	return 0;
}
