#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll MAXSUM(ll arr[],ll n)  // takes array and its size as arguments
{  
ll sum=0;
ll maxi=arr[0];
for(ll i=0;i<n;i++){
sum+=arr[i];
maxi=max(maxi,sum);
if(sum<0){
sum=0;
}
}
return maxi; //returns maximum continuous sum
}

int main()
{
ll n;
cin>>n;  //size of  the array
ll arr[n];
for(ll i=0;i<n;i++){
cin>>arr[i];  // elements of the array
}
cout<<"max continuous sum : "<<MAXSUM(arr,n)<<endl;
}