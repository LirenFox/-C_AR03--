#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for(int i=0; i<6; i++){//六個數的立方和
        int temp;
        cin >> temp;
        sum+=temp*temp*temp;
    }
    cout << sum<< endl;
    return 0;
}
