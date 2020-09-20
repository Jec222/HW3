#include <iostream>
#include "hw3.h"

int main() {
  //Test ReverseArray();
 
  int arr[] = { 1, 2, 3, 4, 5 };
	ReverseArray(arr,5);
  int n = sizeof(arr)/sizeof(arr[0]);

  //std::cout << n << std::endl;

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
/*


//Test HasBalancedParentheses();
 std::string statement1 = "((())())";
 If(HasBalancedParentheses(statement1)){
   	std::cout << "Is it Ballanced: " << std:endl;
 }

// Test InDogish();
 std::string mydogs = "dpoags";
 If(InDogish(mydogs)){
   	std::cout << "Part of Dogish? " << std:endl;
 }

 // Test bool InXish(sting mytext, sting myword);
*/
}

