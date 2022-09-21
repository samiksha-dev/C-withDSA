// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.

#include <iostream>
using namespace std;
bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}
char upper_to_lower(char arr)
{
    if ((arr >= 'a' && arr <= 'z') || (arr >= '0' && arr <= '9'))
        return arr;
    else
    {
        char temp = arr - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(string arr)
{
    int s = 0, e = arr.length() - 1;
    while (s <= e)
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool isPalindrome(string s)
{
    string temp = " ";
    for (int j = 0; j < s.length(); j++)
    {
        if (isValid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    for (int j = 0; j < s.length(); j++)
    {
        temp[j] = upper_to_lower(temp[j]);
    }
    return checkpalindrome(temp);
}

int main()
{
    string arr;
    cout << "Type your string";
    cin >> arr;
    cout << isPalindrome(arr);
    return 0;
}