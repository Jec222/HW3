/****
* PSEUDOCODE:
*
*/

void ReverseArray(int arr[], int length){

  int start = -1;
  int end = length; 

  while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 

}