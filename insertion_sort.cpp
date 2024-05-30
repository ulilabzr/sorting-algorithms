#include <iostream>
#include <conio.h>
using namespace std;

int data[10], data2[10];
int n;

int tukar(int a, int b)
{
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
    return 0;
}

int input()
{
    cout << "Masukkan Jumlah Data : ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Data Ke-" << i + 1 << " : ";
        cin >> data[i];

        data2[i] = data[i];
    }
    cout << endl;
    return 0;
}

int tampil()
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << data[i] << "]";
    }
    cout << endl;
    return 0;
}

int insertion_sort(int data[])
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = data[i];
        j = i - 1;
        while (data[j] > temp && j >= 0)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = temp;
        tampil();
    }
    cout << endl;
}

int main()
{
    cout << "AlGORITMA INSERTION SORT" << endl;
    cout << "---------------------" << endl;
    input();
    cout << "Proses Insertion Sort" << endl;
    tampil();
    insertion_sort(data);
    getch();
    return 0;
}