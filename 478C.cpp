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
	long long int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout<<min((long long)(a[0]+a[1]),(long long)(a[0]+a[1]+a[2])/3LL)<<endl;

	return 0;
}
