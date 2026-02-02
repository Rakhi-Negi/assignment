#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n - 1, result = -1;
       
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            high = mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n-1, result = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            result = mid;
            low = mid + 1;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return result;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int key;
        cin >> key;
        
        int first = firstOccurrence(arr, n, key);
        if(first == -1)
        {
            cout << "key not present" << endl;
        }
        else{
            int last = lastOccurrence(arr, n, key);
        }
    }
    return 0;
}    