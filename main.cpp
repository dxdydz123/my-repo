#include <iostream>
using namespace std;
int binarySearch(int size,int arr[],int key){
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2;
  while(start <= end){
    if(arr[mid] == key){
      return mid;
    }
    if(key >= arr[mid]){
      start += mid;
    }
    else{
      start -= mid;
    }
    mid = start + (end - start)/2 ;
  }
  return -1;
}

int main() {
 
int even[6] = {2,4,6,8,12,18};
  
int evenIndex = binarySearch( even , 6 , 20);
 cout << "Index of 18 is" << evenIndex << endl;
  
  
  
}