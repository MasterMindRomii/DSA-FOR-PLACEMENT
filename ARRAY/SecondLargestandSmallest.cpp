int secondLargest(vector<int> &a,int n){
    int Largest = a[0];
    int sLargest= -1;

    for(int i=1; i<n; i++)
    {
        if(a[i]>Largest)
        {
            sLargest = Largest;
            Largest = a[i];
        }

        else if(a[i]<Largest && a[i]>sLargest)
        {
            sLargest=a[i];
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> &a , int n)
{
    int smallest = a[0];
    int sSmalllest  = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            sSmalllest=smallest;
            smallest = a[i];
        }

        else if (a[i] != smallest && a[i]< sSmalllest)
        {
            sSmalllest = a[i];
        }
    }
    return sSmalllest;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest (a,n);
    int sSmallest = secondSmallest(a,n);
    return {sLargest, sSmallest};
}
