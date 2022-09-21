#include <iostream>
using namespace std;

string reverseWords(string &rev)
{

    int s = 0, e, count = 0, sinit, einit, s1 = 0;
    for (int i = 0; i < rev.length(); i++)
    {
        if (rev[i] == ' ')
        {

            e = i - 1;
            s = s1 + 1;
            count++;
            if (count == 1)
            {
                sinit = 0;
                einit = i - 1;
                while (sinit < einit)
                {
                    // cout << arr[s] << " " << arr[e] << "\n";
                    swap(rev[sinit], rev[einit]);
                    // cout << arr[s] << " " << arr[e] << "\n";
                    sinit++;
                    einit--;
                }
            }
            else
            {
                while (s < e)
                {
                    // cout << arr[s] << " " << arr[e] << "\n";
                    swap(rev[s], rev[e]);
                    // cout << arr[s] << " " << arr[e] << "\n";
                    s++;
                    e--;
                }
            }
            s1 = i;
        }
    }
    if (rev[rev.size() - 1] != ' ')
    {
        e = rev.size() - 1;
        s = s1 + 1;

        while (s < e)
        {
            // cout << arr[s] << " " << arr[e] << "\n";
            swap(rev[s], rev[e]);
            // cout << arr[s] << " " << arr[e] << "\n";
            s++;
            e--;
        }
    }
    return rev;
}
int main()
{
    string s;
    string rever = "";

    // cin >> s;
    getline(cin, s);
    rever = reverseWords(s);
    cout << rever;
    return 0;
}