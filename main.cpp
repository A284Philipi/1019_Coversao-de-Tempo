#include <iostream>

using namespace std;

int main()
{
    int mim=0, hora=0, tempo=0;
    cin >> tempo;
    while (tempo >= 3600){
        hora++;
        tempo = tempo -3600;
    }
    while (tempo >= 60){
        mim++;
        tempo = tempo - 60;
    }
    cout << hora << ":" << mim << ":" << tempo <<endl;
    return 0;
}
