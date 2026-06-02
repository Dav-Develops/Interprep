// Linear Search (require/ works on sorted elements):
//  Technique: compare every arrElement one-by-one with a key (traverse n elements). TC: Big(O).

#include <iostream>
using namespace std;

int main()
{
    int Ls[10] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(Ls) / sizeof(Ls[0]);
    int key = 9;
    // int keyIndex= linearSearch(Ls, size, key);
    auto keyIndex = [&Ls](int size, int key)
    {
        int length = size - 1;
        for (int i = 0; i <= length; i++)
        {
            if (Ls[i] == key)
            {
                cout << key << " is at index: " << i;                
            }
        }
        return -1;
    };
    keyIndex(size, key);
    // cout<<endl<<key<<" is at index: "<<keyIndex;
    return 0;
}