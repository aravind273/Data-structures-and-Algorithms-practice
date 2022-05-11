void insertionSort(int *arr, int n)
{
    //O(n^2)
    // array is divided into two fileds one is sorted and another is unsorted
    // sorted is left field and unsorted is right field and we will pick one value from unsorted and compare with sorted values and we 
    // will place the unsorted value at correct position in sorted array.
    
//                 5 4 3 
//  first pass :   j i
//                 4 5 3
//  second pass :    j i
//                 4 3 5 
//                 j   i
//                 3 4 5  
    
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
