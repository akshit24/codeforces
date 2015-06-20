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
	int n,m,k,row,col;
	int cnt = 0;int nut = 0;int flag = 0;
	cin>>n>>m>>k;
	for(int i = 1 ; i <=n ; i++){
		if(k == 1){col = 1;row = 1;break;}
		if(i%2 == 1){
			for(int j = 1 ; j<=m ; j++){
					if(nut == k-1){
						flag = 1;
						col = j;
						row = i;
						cout<<"\n";
						break;
					}
				if(cnt == 0)
					cout<<"2 ";
					cout<<i<<" "<<j<<" ";
				cnt++;
				if(cnt % 2 == 0 && cnt !=0){
					nut++;
					if(nut!=k-1){
					cout<<"\n";
					cout<<"2 ";}
					if(nut == k-1){
						flag = 1;
						col = j;row = i;cout<<"\n";
						break;
					}

				}
			}
		}
		if(flag == 1)break;
		if(i%2 == 0){
			for(int j = m ; j>=1 ; j--){
				if(nut == k-1 ){
					flag = 1;
					row = i;
					col = j;
					cout<<"\n";
					break;}
				cout<<i<<" "<<j<<" ";
				cnt++;
				if(cnt % 2 == 0 && cnt != 0){
					nut++;
					if(nut == k-1){
						flag = 1;
						row = i;
						col = j;
						cout<<"\n";
						break;
					}
					cout<<"\n";
					cout<<"2 ";
				}
			}
		}
		if(flag == 1)break;
	}
	//cout<<"out\n";
	int rem = n*m-(2*(k-1));
	cout<<rem<<" ";
	//cout<<"row = "<<row <<"  col = "<<col<<endl;
	if (row%2 == 1){
		if(k!=1)
		for(int j = col+1 ; j<=m ; j++){
			cout<<row<<" "<<j<<" ";
		}
		if(k == 1)
		for(int j = col ; j<=m ; j++){
			cout<<row<<" "<<j<<" ";
		}
	}
	if(row%2 == 0){
		if(k!=1)
		for(int j = col-1 ; j>=1 ; j--){
			cout<<row<<" "<<j<<" ";
		}
		if(k==1)
		for(int j = col ; j>=1 ; j--){
			cout<<row<<" "<<j<<" ";
		}
	}
	row = row+1;
	for(int i = row ; i <=n ; i++){
		if(i%2 == 1){
			for(int j = 1 ; j<=m ; j++){
				cout<<i<<" "<<j<<" ";
			}
		}
		if(i%2 == 0){
			for(int j = m ; j>=1; j--){
				cout<<i<<" "<<j<<" ";
			}
		}
	}
	return 0;
}









































