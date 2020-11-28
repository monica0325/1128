//PREPEND BEGIN
#include <iostream>
using namespace std;

int num_of_ways(int);

int main()
{
    int N;
    cin >> N;
    cout << num_of_ways(N) << endl;
}
int num_of_ways(int N){
//PREPEND END

//TEMPLATE BEGIN
    // TODO
    static int turn = -1, num = 0;
    static int* step = NULL;

    if (!step) step = new int[N];

    ++turn;
    if (N == 0) {
        for(int i = 0; i < turn; ++i){
            if(i) cout << ' ';
            cout << step[i];
        }
        cout << endl << turn << endl;
        ++num;
    }
    if (N > 0) {
        step[turn] = 1;
        num_of_ways(N-1);
    }
    if (N > 1) {
        step[turn] = 2;
        num_of_ways(N-2);
    }
    if (N > 2) {
        step[turn] = 3;
        num_of_ways(N-3);
    }
    --turn;

    return num;
//TEMPLATE END

//APPEND BEGIN
}
//APPEND END
