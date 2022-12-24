#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() 
{
    std::map<int, int> m = { {100, 0 }, { 300, 34 }, { 500, 5 }, { 600, 0 } };

    auto it = m.lower_bound(500);

    if ( it != m.begin() )
    {
        std::cout << ( --it )->second << std::endl;
    }

    return 0;
}