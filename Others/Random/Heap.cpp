#include <bits/stdc++.h>
using namespace std;

void heapifyDown(vector<int> &heap, int n, int idx)
{
    int largest = idx;
    int left_idx = 2 * idx + 1;
    int right_idx = 2 * idx + 2;

    if (left_idx < n && heap[largest] < heap[left_idx])
    {
        largest = left_idx;
    }
    if (right_idx < n && heap[largest] < heap[right_idx])
    {
        largest = right_idx;
    }
    if (largest != idx)
    {
        swap(heap[largest], heap[idx]);
        heapifyDown(heap, n, largest);
    }
}
void heapifyUp(vector<int> &heap, int index)
{
    int parent = (index - 1) / 2;
    if (index > 0 && (heap[index] > heap[parent]))
    {
        swap(heap[index], heap[parent]);
        heapifyUp(heap, parent);
    }
}

void Build_Max_Heap(vector<int> &heap)
{
    int n = heap.size();
    // since leaf nodes have no child. those are heap. we need to check (n-1) index to 0.
    for (int i = (n - 1) / 2; i >= 0; i--)
    {
        heapifyDown(heap, n, i);
    }
}

void Delete_Root(vector<int> &heap)
{
    int n = heap.size();
    if (n == 0)
        return;

    swap(heap[0], heap[n - 1]);
    heap.pop_back();
    heapifyDown(heap, n - 1, 0);
}
void insert_in_Heap(vector<int> &heap, int val)
{
    heap.push_back(val);
    heapifyUp(heap, heap.size() - 1);
}

void print(vector<int> &heap)
{
    for (int val : heap)
    {
        cout << val << " ";
    }
    cout << endl;
}

void heapSort(vector<int> &heap)
{
    Build_Max_Heap(heap);
    int n = heap.size();
    for (int i = n - 1; i > 0; i--)
    {
        swap(heap[0], heap[i]);
        heapifyDown(heap, i, 0);
    }
}
int main()
{
    vector<int> heap;

    // 1. Build Max heap by inserting 1 by 1 element with O(logN)

    /*insert_in_Heap(heap, 10);
    insert_in_Heap(heap, 15);
    insert_in_Heap(heap, 25);
    insert_in_Heap(heap, 26); */

    // 2. Given array build Max Heap using heapifyUp O(NlogN). we can Optimize using heapifyDown algo with O(N)

    /* heap = {3, 5, 1, 10, 2, 7};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)  // O(N)
    {
        int val;
        cin >> val;
        heap.push_back(val);
        heapifyUp(heap, heap.size() - 1);  // O(LogN)
    } */

    // 3 Heapify_Down

    // heap = {3, 5, 1, 10, 2, 7};
    // Build_Max_Heap(heap);

    // 4 Delete an element in a heap
    // Delete_Root(heap);

    // 5 HeapSort
    heap = {3, 5, 1, 10, 2, 7};
    heapSort(heap);
    print(heap);
    return 0;
}