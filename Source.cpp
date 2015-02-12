#include <iostream>


using namespace std;
int list[] = { 6, 10, 3, 7, 13, 0 , 5, 8, 9, 16, 1, 2, 14, 11, 10 };
void swap(int * x, int * y);

int partition(int list[], int left, int right)  {
	int k = (left + right) / 2;
	swap(&list[left], &list[k]); // move pivot to left location 
	int key = list[left];
	int i = left + 1;
	int j = right;
	while (i <= j)  {
		while ((i <= right) && (list[i] <= key))
			i++;
		while ((j >= left) && (list[j] > key))
			j--;
		if (i < j)
			swap(&list[i], &list[j]);
	}
	swap(&list[left], &list[j]); // swap pivot into place
	return j;
}
void swap(int * x, int * y)
{
	int *temp = x;
	x = y;
	y = temp;
}



int main(){


	cout<< partition(list, 0, 14);
	cin.get();
	return 0;
}