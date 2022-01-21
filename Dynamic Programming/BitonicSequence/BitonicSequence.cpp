#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

       
        int left[n];
        int right[n];
        left[0]=1;
        right[n-1]=1;
        for(int i=1;i<n;i++)
        {
        int j=i-1;
         int max=1;

         while(j>=0)
         {
             if(a[i]>a[j])
             {
                 if(left[j]+1>max)
                 {
                     max=left[j]+1;
                 }
             }
             j--;
         }

         left[i]=max;
         



        } 

        for(int i=n-2;i>=0;i--)
        {
            int j=i+1;
            int max=1;
            while(j<n)
            {
                if(a[i]>a[j])
                {
                    if(right[j]+1>max)
                    {
                        max=right[j]+1;
                    }  
                }
                j++;
            }
            
            right[i]=max;
        }

              
        int fans=left[0]+right[0]-1;
        
        for(int i=1;i<n;i++)
        {
            if(left[i]+right[i]-1>fans)
            {
                fans=left[i]+right[i]-1;
            }
        }

        cout<<fans<<endl; 
    }
    return 0;
}