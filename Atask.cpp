
#include <set>
#include <iostream>

int main()
{
    int n = 0;

    std::cin >> n;
    std::set<int> set;
    int t = 0;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> t;
        set.insert(t);
    }
    std::cout << set.size();
    return 0;
}
