//works only on monotonic function . that is either increasing or decreasing order 
//mid = (s+e)/2 : s : least index , e : largest index
// optimised mid : s + (e-s)/2
#include<bits/stdc++.h>
using namespace std;
//function implementing binary search
int binarySearch(int arr[] , int size , int key){
    int start  = 0 , end = size-1;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
      if(arr[mid] == key){
        return mid;
      }
      if(key>arr[mid]){
        start = mid+1;
      }
      else{
        end = mid-1;
      }
    }
    return -1;
}
int main(){

    int even[6] = {1,3,5,6,8,9};
    int odd[5] = {3,5,65,234,455};
    int index = binarySearch(odd,5,6);
    cout<<index<<endl;


}