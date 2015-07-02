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

long long cnt[100001];
long long dp[100001];

int main()
{
	std::ios_base::sync_with_stdio(false);
	int n,a;
	memset(cnt,0,sizeof(cnt));
	cin>>n;
	for(int i = 1 ; i <= n ; i++){
		cin>>a;
		cnt[a]++;
	}
	dp[0] = 0;
	dp[1] = cnt[1];
	for(int i = 2 ; i <= 100000 ; i++){
		dp[i] = max(dp[i-1], dp[i-2]+cnt[i]*((long long)i));		
	}
	cout<<dp[100000]<<endl;
	return 0;
}
