 int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 2, 4, 6, 7};
    int oddIndex = binarySearch(odd, 5, 7);
    int evenIndex = binarySearch(even, 6, 12);
    cout << "Odd index is" << oddIndex << endl;
    cout << "Even index is" << evenIndex << endl;