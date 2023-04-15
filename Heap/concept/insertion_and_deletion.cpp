#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int d)
    {
        size++;
        arr[size] = d;
        int i = size;
        while (i > 1)
        {
            int parent = i / 2;
            if (arr[i] > arr[parent])
            {
                swap(arr[i], arr[parent]);
                i = parent;
            }
            else
                return;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deletion()
    {
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left <= size && arr[left] > arr[i])
            {
                swap(arr[i], arr[left]);
                if (right <= size && arr[right] > arr[i])
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else
                    i = left;
            }
            else
                return;
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[i] < arr[left])
        largest = left;
    if (right <= n && arr[largest] < arr[right])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildheap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}
int main()
{
    int arr[] = {-1, 10, 30, 50, 20, 35, 15};
    buildheap(arr, 6);
    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}