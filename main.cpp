#include <iostream>

using namespace std;

int main()
{
 int r;
cout<< "choose one for incode and two for decode  ";
cin >>r;
if (r==1){
    int w[5];
    for (int i=0;i<5;i++) {
        cin >> w[i];
    }
    string s  ;
    cin.ignore();
    getline(cin,s);
    char x[5][5] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
    for (int k = 0;k<s.size();k++) {
        if(s[k] == ' ') {
            cout << " ";
            continue;
        }
        int a,b;
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                    if(s[k]>='A' && s[k]<='Z') {
                        s[k]=s[k]-'A'+'a';
                    }
                    if(s[k]==x[i][j]) {
                        a=i, b=j;
                    }
            }
        }

        cout << w[a] << w[b];
    } }
    else if (r==2){
    int w[5];
  for (int i = 0; i < 5; i++)
    cin >> w[i];
  char x[5][5] = {'a','b','c','d','e',
                  'f','g','h','i','j',
                  'k','l','m','n','o',
                  'p','q','r','s','t',
                  'u','v','x','y','z'};

  string s ;
  cin.ignore();
  getline(cin,s);
  for (int k = 0; k < s.size(); k++) {
    if(s[k] == ' ') {
      cout << ' ';
      continue;
    }

    int a,b;
    for (int i = 0; i < 5; i++) {
      if(s[k]-'0' == w[i])
        a = i;
      if(s[k+1]-'0' == w[i])
        b = i;
    }

    cout << x[a][b];
    k++;
  }

}
return 0;
}
