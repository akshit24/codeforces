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

bool ifpossible (int s, int m){
	return (s>=0 && s<=9*m);
}
int ans1[101];
int ans2[101];
int main()
{
	std::ios_base::sync_with_stdio(false);
	int m,s;
	cin>>m>>s;
	int sum = s;
	int idx = 0;
	if(m == 1 && s == 0){
		cout<<"0 0\n";
	}
	else if(s>9*m || s==0 )
		cout<<"-1 -1\n";
	else{
		for(int j = 1 ; j <= m ; j++){
			for(int i = 0 ; i <= 9 ; i++){
				if(ifpossible(s-i,m-j) && !(j==1 && i == 0)){
					ans1[idx++] = i;
					s-=i;
					break;
				}
			}	
		}
		idx = 0;
		for(int j = 1 ; j <= m ; j++){
			for(int i = 9 ; i >=0 ; i--){
				if(ifpossible(sum-i,m-j) && !(j == 1 && i == 0)){
					ans2[idx++] = i;
					sum-=i;
					break;
				}
			}	
		}
		for(int i = 0 ; i < m ; i++){
			cout<<ans1[i];
		}
		cout<<" ";
		for(int i = 0 ; i < m ; i++){
			cout<<ans2[i];
		}
	}
	return 0;
}
