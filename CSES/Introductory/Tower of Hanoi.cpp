#include <bits/stdc++.h>
 
using namespace std;
 
 
void moveDisk(int diskNumber, vector<vector<int> >& moves,
              int sourceStack, int destinationStack,
              int auxiliaryStack)
{
    if (diskNumber == 1) {
        moves.push_back({ sourceStack, destinationStack });
        return;
    }
    moveDisk(diskNumber - 1, moves, sourceStack,
             auxiliaryStack, destinationStack);
 
    
    moves.push_back({ sourceStack, destinationStack });
 
   
    moveDisk(diskNumber - 1, moves, auxiliaryStack,
             destinationStack, sourceStack);
}
 
 
void towerOfHanoi(int numberOfDisks)
{
    vector<vector<int> >
        moves; 
    int sourceStack = 1, destinationStack = 3,
        auxiliaryStack = 2; 
    moveDisk(numberOfDisks, moves, sourceStack,
             destinationStack,
             auxiliaryStack); 
 
    cout << moves.size() << "\n";
 
    for (auto move : moves) {
        cout << move[0] << " " << move[1] << "\n";
    }
}
int main()
{
    int n;cin>>n;
    towerOfHanoi(n);
    return 0;
}
