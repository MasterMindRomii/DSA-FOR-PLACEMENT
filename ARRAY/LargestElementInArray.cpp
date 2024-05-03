#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int Largest = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>Largest)
        {
            Largest = arr[i];
        }    
    }

    return Largest;
}
