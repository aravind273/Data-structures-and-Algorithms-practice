void selectionSort(int *arr, int n)
{
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
