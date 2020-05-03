#include<iostream>
using namespace std;

void arrange(int* arr, int len);

int main()
{
	int a[] = { 4,3,6,9,1,2,10,8,7,7 };

	int len = sizeof(a) / sizeof(a[1]);

	arrange(a,len);
	for (int i=0; i<len;i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}

void arrange(int* a, int len) 
{
	for(int i=0; i<len-1; i++)
	{
		for (int j = 0; j<len-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}