#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Navneet Savita" << endl;
    cout << "2100320120117" << endl;
    insertionSort(arr);
    return 0;
}
