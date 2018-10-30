#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 26;
Batas = 26 + 100;
X = 20;
T = 26;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;

    }
    cout << T;
}
