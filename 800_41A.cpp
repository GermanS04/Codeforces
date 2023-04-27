// A. Translation

# include <iostream>
# include <string>

using namespace std;

int main(){
    string word;
    string drow;
    string rword;

    cin >> word;
    cin >> drow;
    rword = word;
    reverse(rword.begin(), rword.end());
    
    if (rword == drow){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}


