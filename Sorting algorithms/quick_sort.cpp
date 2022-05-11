
// we divide the array into two halves according to pivot .All elements to the left are smaller than pivot and right are greater than pivot.
// first we assume pivot as left most element in the array and we make sure all elements to be at left of pivot should be small and all elements to the right are larger
// accordingly we swap the elements if we find any distrubance .
// after all the swaps we swap the pivot with A[j];
// we repeat for other halves in the same way.
//https://www.youtube.com/watch?v=7h1s2SojIRw
// Best & avg : O(nlogn) , worst : O(n^2)
// parition(l,h)
// {
//   pivot= A[l];
//   i=l,j=h;
//   while(i<j)
//   {
//     do
//     {
//       i++;
//     }
//     while(A[i]<=pivot);
    
//     do
//     {
//       j--;
//     }
//     while(A[j]>pivot);
    
//     if(i<j)
//     {
//       swap(A[i],A[j]);
//     }
//   }
//   swap(A[l],A[j]);
//   return;
// }

// QuickSort(l,h)
// {
//   while(i<h)
//   {
//     j=parition(l,h);
//     QuickSort(l,j);
//     QuickSort(j+1,h);
//   }
// }
