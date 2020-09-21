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
bool DogishHelper(std::string word, char letter){

  if (word == "")
    return false;

  if(word[0] == letter){
    return true;
  }
  else
    return DogishHelper(word.substr(1,word.length()),letter);
}
bool InDogish(std::string input){

 if (input == "")
    return false;

  if(input[0] == 'd'){
    if (input == "")
       return false;

    if(input[0] == 'o'){
      if (input == "")
        return false;

      if(input[0] == 'g')
        return true;
      else
        return InDogish(input.substr(1,input.length()));
    }
    else
      return InDogish(input.substr(1,input.length()));
  }
  else
    return InDogish(input.substr(1,input.length()));
}

bool InXish(std::string input, std::string choosen_word){
  return true;
}
