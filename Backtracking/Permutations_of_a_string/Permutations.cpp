#include <iostream>
using namespace std;

void swap(char* x,char* y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permute(string a,int l,int r)
{
   // int i;
    if(l==r)
    {
        cout<<a<<" ";
        return;
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(a[l],a[i]);
            permute(a,l+1,r);
            swap(a[l],a[i]);
        }
    }
}

int main()
{
    string str;
	cin>>str;
	permute(str,0,str.length()-1);
}
