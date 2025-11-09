#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void max_heap_input(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] <= v[cur_idx])
        {
            swap(v[par_idx], v[cur_idx]);
        }
        else
            break;

        cur_idx = par_idx;
    }
}
void print(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

void Delete_Heap(vector<int> &v, vector<int> &newV)
{
    newV.push_back(v[0]);
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur_idx = 0;

    while (true)
    {
        int left_child_idx = cur_idx * 2 + 1;
        int right_chlid_idx = cur_idx * 2 + 2;

        if (left_child_idx < v.size() && right_chlid_idx < v.size())
        {
            if ((v[left_child_idx] >= v[right_chlid_idx]) && (v[left_child_idx] > v[cur_idx]))
            {
                swap(v[left_child_idx], v[cur_idx]);
                cur_idx = left_child_idx;
            }
            else if ((v[right_chlid_idx] >= v[left_child_idx]) && v[right_chlid_idx] > v[cur_idx])
            {
                swap(v[right_chlid_idx], v[cur_idx]);
                cur_idx = right_chlid_idx;
            }
            else
                break;
        }
        else if (left_child_idx < v.size())
        {
            if (v[left_child_idx] > v[cur_idx])
            {
                swap(v[left_child_idx], v[cur_idx]);
                cur_idx = left_child_idx;
            }
            else
                break;
        }
        else if (right_chlid_idx < v.size())
        {
            if (v[right_chlid_idx] > v[cur_idx])
            {
                swap(v[right_chlid_idx], v[cur_idx]);
                cur_idx = right_chlid_idx;
            }
            else
                break;
        }
        else
            break;
    }
}

// void heap_sort(vector<int> &v, &newV)
// {
// }
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        max_heap_input(v, x);
    }

    // print(v);
    max_heap_input(v, 102);

    // print(v);
    cout << endl;

    vector<int> newV;
    while (!v.empty())
        Delete_Heap(v, newV);

    // print(v);
    print(newV);
    return 0;
}