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

int dp[101][2],k,d,ans;
int solve(int weight, int issum, int n ){
	ans = 0;
	if(n < 0){
		return 0;
	}
	if(dp[weight][issum]!=-1){
		return dp[weight][issum];
	}
	if(n == 0){
		if(issum == 0){
			dp[weight][issum] = 0;
			return dp[weight][issum];
		}
		else{
			dp[weight][issum] = 1;
			return dp[weight][issum];
		}
	}
	for(int i = 1; i <= k ; i++){
		if(i>=d || issum == 1){
			ans = ((ans%LL)+(solve(weight+i,1,n-i))%LL)%LL;	
		}
		else
		{
			ans = ((ans%LL)+(solve(weight+i,0,n-i))%LL)%LL;	
		}
	}
	dp[weight][issum] = ans;
	return dp[weight][issum];
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n ;
	cin>>n>>k>>d;
	memset(dp,-1,sizeof(dp));
	int ans = solve(0,0,n);
	cout<<ans<<endl;
	return 0;
}
