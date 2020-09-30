#include <iostream>
using namespace std;

void move(char f, char t, char e, int n)
{
    if(n == 1)
    {
        cout << "Transfer ring from From tower to the To tower." << endl;
        return;
    }
    
    move(f, e, t, n-1);
    cout << "Transfer top ring from From tower to Extra tower" << endl;
    move(e, t, f, n-1);
    return;
    
}

int main() {
    int n;
    cout << "Enter the amount of rings." <<endl;
    cin >> n;
    move('f', 't', 'e', n);
    return 0;
}
