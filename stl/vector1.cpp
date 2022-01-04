#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &vec1)
{
    for (int i = 0; i < vec1.size(); i++)
    {

        cout << vec1[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;          // zero length vector
    vector<char> vec2(4, 'a'); // 4-element character vector
    vector<char> vec3(vec2);   // 4-element character vector from vec2
    vector<int> vec4(6, 3);    // 6-element vector of 3s
    display(vec3);
    cout << vec4.size();

    // M-2 for displaying
    cout << "before pop" << endl;
    for (int i : vec4)
    {
        cout << i << "  "; // or cout<<vec4[i]<<" "
    }
    cout << endl;
    vec4.pop_back();
    for (int i : vec4)
    {
        cout << i << " ";
    }
    cout << endl;

    // Note when we clear vector size becomes 0(mtlb elementchale jaate hai capacity zero nhi hoti mtlb jitni memory allocate ki hai woh zero nahi hoti hai)
    // vec4.clear()
    return 0;
}