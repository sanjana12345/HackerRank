#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
    string s[100],temp;
    long long int n,c,m,i,l,p,k,t;
    s[0]="1";
    for(i=0; i<99; i++)
        {
        l=s[i].length()-1;
        c=0;
        m=0;
        while(l>=0)
            {
            p=(s[i][l]-48)*(i+2)+c;
                           m=p%10;
            temp.push_back(m+48);
            c=p/10;
            l--;
        }
        while(c>0)
          {
            t=c%10;
            temp.push_back(t+48);
            c=c/10;
        }
        reverse(temp.begin(),temp.end());
        s[i+1]=temp;
        temp.erase();
        
    }
    cin>>n;
    cout<<s[n-1]<<endl;
    
    return 0;
}
