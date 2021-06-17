void insertionSort(int *arr, int n)
{
    
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        while(j>=0 && arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}
