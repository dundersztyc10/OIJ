#include <iostream>
#include <vector>

using namespace std;

void test(vector<int>v){
    int counter = 1;
    vector<int>m;
    for(int i=0; i<v.size()-1; ++i){
        if(v[i]>v[i+1]){
            m.push_back(-1);
        }
        else if(v[i]<v[i+1]){
            m.push_back(1);
        }
    }
    for(int i=0; i<m.size(); ++i){
        if(m[i]+m[i+1]==0){
            counter++;
        }
    }
    cout << counter;
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
    test(values);
    return 0;
}
