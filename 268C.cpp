#include<iostream>
#include<cstdlib>
#include<cstdio>
#include <algorithm> 
using namespace std;

int main()
{
    int n,m,x,y,a;
    cin>>n>>m;
    a=min(m+1,n+1);
    cout<<a<<endl;
    x=0;y=a-1;
    //printf("0 %d\n",a);
    while(y>=0)
    {
               printf("%d %d\n",x,y);
               x++;y--;
}
    return 0;
    }
