

#include <iostream>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;
    std::vector <int> p;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            p.push_back(s[i]);
        }
        else if (s[i] == ')' && !p.empty() && p.back() == '(') {
            p.pop_back();
        }
        else if (s[i] == '}' && !p.empty() && p.back() == '{') {
            p.pop_back();
        }
        else if (s[i] == ']' && !p.empty() && p.back() == '[') {
            p.pop_back();
        }
        else if (s[i] == ']' && !p.empty() && p.back() == '[') {
            p.pop_back();
        }
       
        else if (  p.empty() && (s[i] == ']' || s[i] == ')' || s[i] == ']')) {
            p.push_back(s[i]);
            break;
        }
        else {
            p.push_back(s[i]);
        }
        
    }

    if (p.empty()) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
}

