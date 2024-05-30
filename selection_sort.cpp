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

int selection_sort(int data[])
{
    int i, j, posisi, tukar;
    for (i = 0; i < (n - 1); i++)
    {
        posisi = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[posisi] > data[j])
            {
                posisi = j;
            }
        }
        if (posisi != 1)
        {
            tukar = data[i];
            data[i] = data[posisi];
            data[posisi] = tukar;
        }
        }
    tampil();
    return 0;
}

int main()
{
    cout << "AlGORITMA SELECTION SORT" << endl;
    cout << "---------------------" << endl;
    input();
    cout << "Proses Selection Sort" << endl;
    tampil();
    selection_sort(data);
    getch();
    return 0;
}