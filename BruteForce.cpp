#include<iostream>
using namespace std;

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

        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == key)
               count++;
        }

        if(count > 0)
          std :: cout << key <<" "<< count << endl;
    }

    return 0;
}