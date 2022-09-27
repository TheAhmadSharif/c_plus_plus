#include <iostream>
using namespace std;


int searchSmallestMissing(int* arr, int left, int right){
   int step = 0;
   int temp =  arr[step + 1];
   if(temp != left + 1) {
   		return temp;
   }  
   

 
  return searchSmallestMissing(A, ++left, );
}

int main () {
	int arr[] = {5, 6, 7};
	int l = sizeof(arr) / sizeof(int);
	int t = searchSmallestMissing(arr, arr[0], l - 1);
	return 0;
}