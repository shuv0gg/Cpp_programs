#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter how many elements : ";
   cin>>n;
   int arr[n];
   cout<<"The elements are : ";

   for(int i=0;i<n;i++)
   {
    
    cin>>arr[i];
   }
   int max=1;
   for(int i=0;i<n;i++)
   {
    
    if (max<arr[i])
    {max=arr[i];}
   }
   cout<<"The max element is "<<max;

   
   
}