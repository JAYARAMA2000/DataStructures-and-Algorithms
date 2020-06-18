#include<iostream>
using namespace std;

void print(string str,string curr=" ",int index=0)
{
    if(index==str.length())
    {
        cout<<curr<<" ";
        return;
    }
    print(str,curr,index+1);
    print(str,curr+str[index],index+1);

}
int main()
{
    string str;
    cin>>str;
    print(str);
    cout<<endl;

}
