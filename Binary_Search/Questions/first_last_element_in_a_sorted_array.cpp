// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include<bits/stdc++.h>
using namespace std;
int first_occur(int arr[] , int size , int key){
     int start  = 0 , end = size-1;
    int mid;
    int ans = -1;
    while(start<=end){
        mid = start + (end-start)/2;
      if(arr[mid] == key){
        ans = mid;
        end = mid-1;
      }
      else if(key>arr[mid]){
        start = mid+1;
      }
      else{
        end = mid-1;
      }
    }
    return ans;
}
int last_occur(int arr[] , int size , int key){
     int start  = 0 , end = size-1;
    int mid;
    int ans = -1;
    while(start<=end){
        mid = start + (end-start)/2;
      if(arr[mid] == key){
        ans = mid;
        start = mid+1;
      }
      else if(key>arr[mid]){
        start = mid+1;
      }
      else{
        end = mid-1;
      }
    }
    return ans;
}
int main(){
       int arr[5] = {1,2,4,4,5};
       cout<<"First Occurence : "<<first_occur(arr,5,4)<<endl;
       cout<<"Last Occurence : "<<last_occur(arr,5,4)<<endl;
       return 0;
}
// THIS CAN BE SOLVED USING UPPER BOUND AND LOWER BOUND  : time complexity log(n)
//LOWER BOUND : WILL FIND THAT ELEMENT OR GREATER THAN THAT 
//UPPER BOUND : EVEN IF THAT ELEMENT IS PRESENT IT WILL FIND THE NEXT ELEMENT (GREATER THAT THAT)
//EXAMPLE : {1,2,3,4,4,5,6,} LOWER BOUND OF 4 : INDEX 3 AND UPPER BOUND OF 4 IS INDEX 5 IE INDEX OF 5
//SYNTAX : lower_bound(v.begin(),v.end(),key) if not found then it will give location v.end()
//can be used with arrays , vectors , set , map
//case of set and map :  o(n) 
// but for o(logn) in set and map we can use set s : s.lower_bound(4) , map m : m.upper_bound(5)