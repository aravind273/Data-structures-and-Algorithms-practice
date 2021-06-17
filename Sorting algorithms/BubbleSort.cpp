void bubbleSort(int *arr, int n)
{
    //Write your code 
    // swap consective elements after each iteration the max element(last pos) is fixed 
    //O(n^2)
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(j+1<n-i && arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
