#include <bits/stdc++.h>
using namespace std;
int lis(int arr[], int i, int n) {
  if(i >= n) return 0;
  if(arr[i] < arr[i+1]) {
    return max(1+lis(arr,i+1,n), lis(arr,i+1,n));
  }
  return lis(arr,i+1,n);
}
int main() {
  int arr[] = {10, 2, 9, 33, 21, 5, 4 , 6, 80};
  cout<<lis(arr,0,sizeof(arr)/sizeof(arr[0]));
}