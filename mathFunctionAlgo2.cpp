#include<iostream>
using namespace std;
int main()
{
int i,u=1,v=1,N;
cout<<"Tapez N : ";cin>>N;
for(i=0;i<N;i++)
w=u+v;
u=v;
v=w;
cout<<"u("<<N<<")="<<u<<endl;
return 0;
}
