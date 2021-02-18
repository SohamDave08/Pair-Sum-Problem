#include <bits/stdc++.h>
using namespace std;


//?!  BRUTE FORCE
// bool pairSum(int A[], int n, int target)
// {
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(A[i]+A[j] == target)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }


//?!  O(N)
bool pairSum(int A[], int n, int target)
{
    sort(A, A+n);
    int high = n-1;
    int low = 0;
    while(low < high)
    {
        if(A[low]+A[high] == target)
        {
            cout<<A[low]<<" "<<A[high]<<endl;
            return true;
        }
        else if(A[low]+A[high] > target)
            high--;
        else
            low++;
    }
    return false;
}

int main()
{
    int Arr[] = {2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairSum(Arr, 8, k)<<endl;

    return 0;
}