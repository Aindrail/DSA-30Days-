/*
Robots With Strings
There are three robots named Ray, Ben and Kevin. Initially Ray has a string S of length
N, while the other two robots have empty strings. We can make either of the following
moves:
• Move 1: Remove the first character from Ray's string and append it to Ben's string.
. Move 2: Remove the last character from Ben's string and append it to Kevin's string.
You must perform either of the two moves mentioned above in such a way that the
strings left with Ray and Ben are empty and the string left with Kevin is lexicographically
the smallest. Your task is to return this lexicographically smallest string that Kevin has
after completing this activity.
Note: For any two given strings, a string is said to be lexicographically smaller than the other, if it comes
before the other string in the dictionary.
Input Specification:
input1: An integer N denoting the length of the string S.
input2: A string S which belongs to Ray and contains all lowercase characters.
Output Specification:
A string value denoting the string left with Kevin which is lexicographically the
smallest.
Example 1:
input1: 3
input2: dad
Image

Optical Character Recognition
Your task is to find the string after performing all the operations.
*/

#include <iostream>
#include <string>
#include <algorithm>
 
int main()
{
    std::string word = "dad";
 
    std::sort(word.begin(), word.end(), std::greater<int>());
 
    std::cout << word << std::endl;            // DCBA
 
    return 0;
}




