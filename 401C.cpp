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
	int n,m,k=0,nz,no;
	cin>>n>>m;
	nz=n;no = m;
	if(m > (2*n+2) || m < n-1){
		cout<<"-1\n";
	}
	else{
		if(m == n-1){
			for(int i = 0 ; i < n+m ; i++){
				if(i%2 == 0)
					cout<<"0";
				else
					cout<<"1";
			}
		}
		else if (m == n){
			for(int i = 0 ; i < n+m ; i++){
				if(i%2 == 0)
					cout<<"1";
				else
					cout<<"0";
			}

		}
		else {
			while(nz!=0 && no!=0 ){
				if(no>nz)
				{
					cout<<"110";
					no-=2;nz--;
				}
				else if (no == nz ){
					cout<<"10";
					nz--;no--;
				}

		//		cout<<"nz = "<<nz <<"no = "<<no<<endl;
			}
			if (no==2){
				cout<<"11";
				no-=2;
			}
			else if(no ==1)
				cout<<"1";
		}
	}

	return 0;
}
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
	int n,m,k=0,nz,no;
	cin>>n>>m;
	nz=n;no = m;
	if(m > (2*n+2) || m < n-1){
		cout<<"-1\n";
	}
	else{
		if(m == n-1){
			for(int i = 0 ; i < n+m ; i++){
				if(i%2 == 0)
					cout<<"0";
				else
					cout<<"1";
			}
		}
		else if (m == n){
			for(int i = 0 ; i < n+m ; i++){
				if(i%2 == 0)
					cout<<"1";
				else
					cout<<"0";
			}

		}
		else {
			while(nz!=0 && no!=0 ){
				if(no>nz)
				{
					cout<<"110";
					no-=2;nz--;
				}
				else if (no == nz ){
					cout<<"10";
					nz--;no--;
				}

		//		cout<<"nz = "<<nz <<"no = "<<no<<endl;
			}
			if (no==2){
				cout<<"11";
				no-=2;
			}
			else if(no ==1)
				cout<<"1";
		}
	}

	return 0;
}

