#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1)
        return false;
    if(n==2||n==3)
        return true;
    if(n%2==0||n%3==0)
        return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%i+2==0)
        return false;
    }
    return true;
}
int main()
{ 
    int n=8;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(x<=n)
            {
                if(n%x==0)
                cout<<i<<" ";
                x=x*i;
            }
        }
    }

}