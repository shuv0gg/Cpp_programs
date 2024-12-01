#include <bits/stdc++.h>
using namespace std;

int search(int ara[], int n, int x) {


  for (int i = 0; i < n; i++)
    if (ara[i] == x)
      return i;
  return -1;
}

int main() {
    int i , n , x  ;
    cout<<"Enter the number of elements: ";
    cin >>n ;
  int ara[n] ;
  cout<<"Enter the elements: ";
  for(i=0;i<n;i++) {
    cin >> ara[i] ;
  }
  cout<<"Enter the element to search: ";
  cin >> x ;

  int result = search(ara, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}
