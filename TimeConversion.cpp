#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hh, results, am_pm, temp;
    int s_len = s.length();
    
    am_pm = s.substr(s_len - 2);
    hh = s.substr(0,2);
    temp = s.substr(2,6);
    
    if(am_pm == "AM"){
        if(hh == "12"){return "00"+temp;}
        else {return hh+temp;}
    }
    if(am_pm == "PM"){
        if(hh == "12"){return hh+temp;}
        else {return (to_string(stoi(hh)+12))+temp;}
    }
    
    
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
