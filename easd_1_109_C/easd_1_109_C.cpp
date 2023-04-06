#include <iostream>
using namespace std;

//1. Suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah karena lebih terstruktur, lebih efisien,
//   dan mudah ketika ingin mencari datanya.
//2. Algoritma diklasifikasikan menjadi 2 data struktur yaitu static dan dynamic.
//3. Waktu (jumlah langkah), ruang penyimpanan, dan cara memrogramnya (memilih yang paling mudah).
//4. Algoritma yang paling efisien untuk mengurutkan data yang ukurannya kecil adalah bubble sort.
//   Alasannya karena bubble sort merupakan algoritma yang paling sederhana.
//5. Yang termasuk Quadratic adalah bubble sort, selection sort, dan insertion sort. Sedangkan yang termasuk
//   kedalam Longlinear adalah quick sort dan merge sort.

int PH[29];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 29)
			break;
		else
			cout << "\nMaksimum panjang array adalah 29" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> PUTRI[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = PUTRI[x];
	PUTRI[x] = PUTRI[y];
	PUTRI[y] = temp;
}

void selectionsort(int high, int min_index)
{
	int pivot, i, PH;
	if (min_index > high)
		return;

	pivot = arr[high];
	PH = min_index;     
	i = high;

	while (PH <= i)
	{
		while ((PUTRI[i] > pivot) && (i >= min_index))
		{
			i--;
			cmp_count++;
		}
		cmp_count++;

		while ((PUTRI[PH] <= pivot) && (PH <= high))
		{
			PUTRI++;
			cmp_count++;
		}
		cmp_count++;

		if (PUTRI[j] < PUTRI[min_index])
		{
			swap(i, PUTRI);
			mov_count++;
		}
	}
	selectionsort(high, PUTRI + 1);
	selectionsort(n - 1, min_index);
}

void display() {
	cout << "\n-----------------" << endl;
	cout << "sorted Array" << endl;
	cout << "-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << PUTRI[i] << " ";
	}

	cout << "\n\nNumber of comparassion: " << cmp_count << endl;
	cout << "Number of data movements: " << mov_count << endl;
}

int main()
{
	input();
	selectionsort(0, n - 1);
	display();
	system("pause");

	return 0;
}