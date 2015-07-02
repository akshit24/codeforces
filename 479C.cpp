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

int main()
{
	std::ios_base::sync_with_stdio(false);
	int n,a,b,ans;
	cin>>n;
	pair<int,int> date[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a>>b;
		date[i].first = a;date[i].second = b;
	}
	sort(date,date+n);
	ans = date[0].second;
	for(int i = 1 ; i < n ; i++){
		if(date[i].second>=ans){
			ans = date[i].second;
		}
		else{
			ans = date[i].first;
		}
	}
	cout<<ans<<endl;
	return 0;
}
