// vector-is a dynamic array.if the size of that array is full then vector doubles its size and create a new array and put
// all the elements in a new array and dumps the old one
// therefore vector can be resized
// whenever we create a vector its size is 0
// note :you can dynamically increase size of vector to 10^6 inside int main anfd to 10^7 globally
// otherwise it will segmentation error
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &vec1)
{
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    cout << "Size-->" << v.capacity() << endl;
    // inserting elements
    // M-1
    v.push_back(1);
    cout << "Size-->" << v.capacity() << endl; // ans=1
    v.push_back(2);
    cout << "Size-->" << v.capacity() << endl; // ans=2
    v.push_back(3);
    cout << "Size-->" << v.capacity() << endl; // ans=4(since 2 element daale toh jb third daalne ki kohish ku isne dekha
                                               // jagah hai nahi toh isne size double kia)
    cout << "elements present-->" << v.size() << endl;

    // Finding element at any index
    cout << "Elements at 2nd index-->" << v.at(2) << endl;

    // // Front and back elements
    cout << "Element at front is-->" << v.front() << endl;
    cout << "Element at last is-->" << v.back();

    // M-2 Inserting elements
    vector<int> vec;

    int element;
    cout << "Enter the elements of vector";
    for (int i = 0; i < 4; i++)
    {
        cin >> element;
        vec.push_back(element);
    }

    // vec.pop_back();
    display(vec);

    // M-3Inserting elements
    vector<int>::iterator iter = vec.begin();
    // vec.insert(iter, 566);
    display(vec);
    // if we want to insert element at 2nd position
    // vec.insert(vec.begin() + 1, 45);
    // or vec.insert(iter+1,566) but bcoz of line 54 i am getting error
    vec.insert(iter + 1, 5, 566); // o/p=7 566 566 566 566 566 4 32 43
    display(vec);
    return 0;
}
