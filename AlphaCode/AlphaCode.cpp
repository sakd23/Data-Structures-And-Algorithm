#include<bits/stdc++.h>
using namespace std;



int main(){

    int m=pow(10,9)+7;
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int a[s.length()+1];
        a[s.length()]=1;
        a[s.length()-1]=1;



        for(int i=s.length()-2;i>=0;i--)
        {
            if(s[i]=='0')
            {
                a[i]=0;
                continue;
            }
            int ans1=a[i+1];
            int ans2=0;


            int c=stoi(s.substr(i,2));

            if(c<=26 and c>0)
            {
                ans2=a[i+2];
            }


            long output=(long)ans1+ans2;
            int output2=(int)(output%m);
            a[i]=output2;


        }

        int ans=a[0];
        cout<<ans<<endl;
    }

    return 0;
}