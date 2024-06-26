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

int bubble_sort()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (data[j] < data[j - 1])
            {
                tukar(j, j - 1);
            }
        }
        tampil();
    }
    cout << endl;
    return 0;
}

int main()
{
    cout << "AlGORITMA BUBBLE SORT" << endl;
    cout << "---------------------" << endl;
    input();
    cout << "Proses Bubble Sort" << endl;
    tampil();
    bubble_sort();
    getch();
    return 0;
}