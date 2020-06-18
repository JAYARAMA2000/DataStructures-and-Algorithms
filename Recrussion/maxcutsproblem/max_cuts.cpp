#include<iostream>
using namespace std;
int maxi(int a,int b,int c)
{

    return max(max(a,b),c);
}
int maxcuts(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res=maxi(maxcuts(n-a,a,b,c),maxcuts(n-b,a,b,c),maxcuts(n-c,a,b,c));
    if(res==-1)
        return -1;
    return (1+res);
}
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Max_cuts :"<<maxcuts(n,a,b,c)<<endl;
}
