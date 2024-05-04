vector<int> rotateArray(vector<int>arr, int k) {
    for(int i=0;i<k;i++){
        int temp=arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }
    return arr;
}