#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for(int i=0; i<6; i++){
        int temp;
        cin >> temp;
        sum+=temp*temp*temp;
    }
    cout << sum;
    return 0;
}
