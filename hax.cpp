#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;

    string full="";
    for(int i=0; i<n.size(); ++i){
        char temp = n[i];
        switch(temp){
            case 'a':
                temp = '4';
                break;
            case 'e':
                temp = '3';
                break;
            case 'i':
                temp = '1';
                break;
            case 'o':
                temp = '0';
                break;
            case 's':
                temp = '5';
                break;
        }
        full += temp;

    }
    cout << full;
    return 0;
}
