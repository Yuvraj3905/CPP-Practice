// #include<iostream>
 
// using namespace std;
 
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--){
// 	int n,m, i, j, max=-1, sum, imax, fmax;
// 	// cout<<"\nEnter the number of data element in the array: ";
// 	cin>>n>>m;
 
//     int a[n];
// 	for(i = 0; i < n; i++)
// 	{
// 		// cout<<"Enter element "<<i+1<<": ";
// 		cin>>a[i];
// 	}
 
// 	// Loop for the length of the sub-array.
// 	for(i = 1; i < n+1; i++)
// 	{
// 		sum = m;
// 		// Loop for the maximizing the sum of the element of the sub array of length 'i'.
// 		for(j = 0; j < n; j++)
// 		{
// 			// First pick the first sub array of 'i' length.
// 			if(j < i)
// 				sum += a[j];
// 			// Add the next element and subtract the first element from the sub-array.
// 			else
// 				sum = sum+a[j]-a[j-i];
 
// 			// Compare the sum with the global maximum of each length.
// 			if(max < sum )
// 			{
// 				// Assign the initial and the final indexes to the imax and the fmax variables and update the max, if condition satisfies.
// 				imax = j-i+1;
// 				fmax = j;
// 				max = sum;
// 			}
// 		}
// 	}
   
// 	// Print the maximum sum sub-array and their sum.
// 	// cout<<"\nThe maximum sub array is: ";
// 	for(i = imax; i <= fmax; i++)
// 		cout<<a[i]<<" ";
// 	cout<<max<<endl;
// }
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int sum = x;
        int sumArr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            sumArr[i] = sum;
        }
        sort(sumArr, sumArr + n);
        if (sumArr[n - 1] < x)
            cout << x << endl;
        else
            cout << sumArr[n - 1] << endl;
    }
    return 0;
}