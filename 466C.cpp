/*--------------------- Author - Akshit ----------------------*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<list>
#include<queue>
#include<cstdlib>
#include<numeric>
#include<set>
#include<map>
#include<deque>
#include<climits>
#include<cassert>
#include<cctype>
#include<ctime>
#include<iterator>
#include<iomanip>
#include<functional>
#include<fstream>
#include<ostream>
#include<istream>
#include<sstream>
using namespace std;

#define sf(n)                scanf("%d",&n) 
#define pf(n)                printf("%d",n)          
#define pfln(n)              printf("%d\n",n)         

#define vi                   vector <int > 
#define pb                   push_back()
#define debug(n)             printf("n = %d\n",n)
#define PI 3.14159265358979
#define LL 1000000007

int a[500001];
int dp[500001];
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n;
	long long ans=0LL;
	memset(dp,0,sizeof(dp));
	long long s = 0LL;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
		s+=a[i];
	}

	long long sum = 0;
	if(s%3 != 0){
		cout<<"0\n";
	}
	else{
		s/=3;
		for(int i = 0; i < n-2 ; i++ ){
			sum+=a[i];
			if(sum == s){
				dp[i] =1;
			}
		}
		sum = a[0];
		for(int i = 1 ; i < n-2 ; i++){
			sum+=a[i];
			if(sum == s)
				dp[i] = dp[i-1]+1;
			else
				dp[i] = dp[i-1];
		}
		sum = 0;
		for(int i = n-1 ; i > 1 ; i--){
			sum+=a[i];
			if(sum == s){
				ans+=dp[i-2];
			}
		}
	cout<<ans<<endl;
	}
	return 0;
}


