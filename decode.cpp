#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[23];
    cin.getline(s,23);

    unordered_map<char, char>encode;
    
    encode['a'] = '^';
    encode['b'] = '(';
    encode['c'] = '-';
    encode['d'] = ')';
    encode['e'] = '$';
    encode['f'] = '!';
    encode['g'] = '#';
    encode['h'] = '~';
    encode['i'] = '`';
    encode['j'] = '*';
    encode['k'] = '&';
    encode['l'] = '=';
    encode['m'] = '%';
    encode['n'] = '/';
    encode['o'] = '<';
    encode['p'] = '/';
    encode['q'] = '?';
    encode['r'] = '>';
    encode['s'] = '}';
    encode['t'] = '[';
    encode['u'] = '}';
    encode['v'] = ']';
    encode['w'] = '5';
    encode['x'] = '+';
    encode['y'] = ';';
    encode['z'] = ':';
    encode[' '] = ' ';
    
    for(int i = 0; i < 23; i++)
    {
        if(encode.find(s[i]) != encode.end())
        s[i] = encode[s[i]];
        else
        s[i] = '_';
    }
    
    cout << s;

    return 0;
}
