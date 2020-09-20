/****
* PSEUDOCODE:
*


    if (input.size() == 0)
        return true;
    if (input.size() == 1)
        return false;

    if (input.at(0) == ')')
        return false;
 
    // Search for closing bracket for first
    // opening bracket.
    char closing = ')';
 
    // count is used to handle cases like
    // "((()))".  We basically need to
    // consider matching closing bracket.
    int i, count = 0;
    for (i = 1; i < input.size(); i++) {
        if (input[i] == input[0])
            count++;
        if (input[i] == closing) {
            if (count == 0)
                break;
            count--;
        }
    }
 
    // If we did not find a closing
    // bracket
    if (i == input.size())
        return false;
 
    // If closing bracket was next
    // to open
    if (i == 1)
        return HasBalancedParentheses(input.substr (2,input.size()-2));
 
    // If closing bracket was somewhere
    // in middle.
    return HasBalancedParentheses(input.substr (1,i-1)) &&
           HasBalancedParentheses(input.substr (i+1,input.size()-i-1));
*/
#include <string>

void ReverseArray(int arr[], int length){

  int start = 0;
  int end = length-1; 

  while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 

}

bool HasBalancedParentheses(std::string input){

  char match = ')';
  int count = 0,
          treverse = 0;

  if (input.size() == 0)
    return true;
  if (input.size() == 1)
    return false;
  if (input.at(0) == ')')
    return false;

     for (treverse = 1; treverse < input.size(); treverse++) {
        if (input[treverse] == input[0])
            count++;
        if (input[treverse] == match) {
            if (count == 0)
                break;
            count--;
        }
    }
 
    if (treverse == input.size())
        return false;
 
    if (treverse == 1)
        return HasBalancedParentheses(input.substr (2,input.size()-2));

    return HasBalancedParentheses(input.substr (1,treverse-1)) &&
           HasBalancedParentheses(input.substr (treverse+1,input.size()-treverse-1));
}