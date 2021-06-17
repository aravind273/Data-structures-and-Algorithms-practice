void selectionSort(int *arr, int n)
{
    // traverse i+1 to n elements and find the minelement and swap it with current element 
    // After each iteration the min element is fixed 
    //O(n^2)
    for(int i=0;i<n;i++)
    {
        int minval=arr[i];
        int idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(minval>arr[j])
            {
                minval=arr[j];
                idx=j;
            }
        }
        if(i!=idx)
        {
            swap(arr[i],arr[idx]);
        }
    }
    
}
