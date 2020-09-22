/****
* PSEUDOCODE:

function reverse an array 

will start by knowing where to start
and what the end of the string will be and keep track of them
will increment start and decrease end untill start is bigger than end
will store start and replace it with end
will get the value stored and set it equal to end 
will decrease end and increase start 

// we need the length so that we can keep track of hoe many elemets we are flipping.

function hasbalancedparantheses

will check is the parathesis are balanced recursebly 
will check if all paranthesis have pairs size will be 0 and return true else will be false also if we see ) at the begining we return false will treverse if we see a ( will look for ) calling it seft until it finds closing bracket or it finds the end of the string and returns false. 

function DogishHelper 

will look for a charater that you desire 
will return false of string is empty 
and true if it finds the character that you are looking for 
by calling it self over and over again. 

function InDogish 

will check if a for is part of the dogish laguage 
will call a requesive fuction call InDogish will look for d,o,g
in that order will have to be in that order. if it finds it we will
return true else it will return false. 

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

  if(DogishHelper(input,'d')){
    int new_location = input.find('d');
    if(DogishHelper(input.substr(new_location),'o')){
      new_location = input.find('o');
      if(DogishHelper(input.substr(new_location),'g')){
        return true;
      }
    }
  }
  return false;
}

bool InXish(std::string input, std::string choosen_word){

  if (input == "")
    return false;

  if (DogishHelper(input,choosen_word[0]))
    DogishHelper(input.substr(input.find(choosen_word[0])),choosen_word[1]);

  if(choosen_word == "" || choosen_word == "\n")
    return true;

  return false;
  
}
