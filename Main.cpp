std::vector<string> drawsnake(int n, int m)
{
    vector<string>p;
    string a = "#", b1 = "#", b2 = "#";
    for(int i = 1; i < m; i++){
        a += '#'; 
        b1 = '.' + b1; 
        b2 += '.';
    }
    bool ok = 1;
    for(int i = 0; i < n; i++)
        if(i % 2 == 0) p.push_back(a);
        else if(ok) {
            p.push_back(b1); 
            ok = 0;
        }
        else {
            p.push_back(b2); 
            ok = 1;
        }
    return p;
}
