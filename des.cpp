#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test(vector<int>v){
    sort(v.begin(),v.end());
    cout << v[v.size()-4]*v[v.size()-4];
}

int main()
{
    vector<int>values;
    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        values.push_back(temp);
    }
    if(n<4){
        cout << 0;
    }
    else{
        test(values);
    }


    return 0;
}
