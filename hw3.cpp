/****
* PSEUDOCODE:
*
*/
#include <string>
void ReverseArray(int arr[], int length){

  int start = 0;
  int end = length-1; 

  while (start < end) {
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;
     start++;
    end--;
    } 
}

bool HasBalancedParentheses(std::string input,int length){
  return true;
}