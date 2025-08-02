// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>

// // double findMedianSortedArrays(vector<int> &a, vector<int> &b)
// // {
// //     vector<int> merged = a;
// //     merged.insert(merged.end(), b.begin(), b.end());
// //     sort(merged.begin(), merged.end());
// // }

// int main()
// {
//     vector<int> a = {1,3,4,7,10,13};
//     vector<int> b = {2,3,6,15};

//     vector<int> merged = a;
//     merged.insert(merged.end(), b.begin(), b.end());
//     sort(merged.begin(), merged.end());

//     // for (int num : merged)
//     // {
//     //     cout << num << " ";
//     // }

//     //BS 
//     // int st = 0; 
//     // int end = merged.size(); 

//     // int mid = st + (end - st) / 2;
//     // cout<<mid<<" ";

//     // if(mid%2==0) {
//     //     cout<<mid<<" ";
//     // } else {
//     //   mid = mid + (mid-1)/2;
//     //   cout<<mid<<" ";
//     // }



//      int n = merged.size();
//     if (n % 2 == 0)
//        return (merged[n/2 - 1] + merged[n/2]) / 2.0;
       
//     else
//         return merged[n/2];
    

// }

//Problem 4 : Median of Two sorted array 
// Time Complexity O(Nlogn)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    vector<int> merged = a;
    merged.insert(merged.end(), b.begin(), b.end());
    sort(merged.begin(), merged.end());

    int n = merged.size();
    if (n % 2 == 0)
        return (merged[n/2 - 1] + merged[n/2]) / 2.0;
    else
        return merged[n/2];
}

int main() {
    vector<int> a = {1,3,4,7,10,13};
    vector<int> b = {2,3,6};
    cout << "Median: " << findMedianSortedArrays(a, b);
}
