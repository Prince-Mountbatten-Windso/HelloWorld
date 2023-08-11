#include <iostream>

using namespace std;

#if 0
void sort(int arr[],int size)
{
	// int tmp = 0;
	// for(int i =0;i<size-1;++i)
	// {
	// 	for(int j=0;j<size-1-i;++j)
	// 	{
	// 		if(arr[j] >arr[j+1])
	// 		{
	// 			tmp = arr[j];
	// 			arr[j] = arr[j+1];
	// 			arr[j+1] = tmp;
	// 		}
	// 	}
	// }|

}

#endif


void sort(int arr[],int i,int j)
{
	int val = arr[i];

	int l = i;
	int r = j;

	while (l < r)
	{
		while (l< r && arr[r] >= val)
		{
			r--;
		}
		if(l < r)
		{
			arr[l++] = arr[r];
		}

		while (l< r && arr[l] <= val)
		{
			l++;
		}
		if(l < r)
		{
			arr[r--] = arr[l];
		}

	}
	all[l] = val;
	sort(arr,i,l-1);
	sort(arr,l+1,j);
}
int main()
{	
	int arr[] = {12,4,89,43,21,78};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	
	for(int i =0;i <size ; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}