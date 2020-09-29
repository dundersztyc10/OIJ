#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    vector<long long int>numbers;
    for(long long int i = 1; i<pow(10,18); ++i){
          string temp = to_string(i);
          bool check = true;
          for(int j=0; j<temp.size(); ++j){
                char c = temp[j];
                int t = int(c-'0');
                if(t%2!=0){
                    check = false;
                }
          }
          if(check == true){
             numbers.push_back(i);
          }
    }
    int n;
    cin >> n;
    cout << numbers[n-1];


    return 0;
}
