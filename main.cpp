#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class anagramy{

    ifstream plik1;
    ofstream plik2;

    public:

void open(){
    plik1.open("plik1.txt");
    plik2.open("plik2.txt");
}





void anagram(){

bool czy_anagram = true;

string s1,s2;

    plik2<<"["<<endl;
     while(!plik1.eof()){

plik1>>s1>>s2;

if(s1.length()!=s2.length())
       czy_anagram=false;



    for (int i=0; i<s1.length()-1; i++)
     for (int j=0; j<s1.length()-1; j++)
      if (s1[j]>s1[j+1])
        swap(s1[j], s1[j+1]);

        for (int i=0; i<s2.length()-1; i++)
         for (int j=0; j<s2.length()-1; j++)
          if (s2[j]>s2[j+1])
            swap(s2[j], s2[j+1]);

for (int i=0; i<s1.length(); i++){
     if (s1 != s2)
        czy_anagram = false;
    else
        czy_anagram = true;
}


}
if (czy_anagram == true)

plik2<<"{\"slowo1\": "<<s1<<", slowo2\: "<<s2<<", \"anagram\"""<<" "TAK"<<"}"<<endl;

else
plik2<<"{\"slowo1\": "<<s1<<", slowo2\": "<<s2<<", \"anagram\"""<<" "NIE"<<"}"<<endl;
plik2<<"]"<<endl;
}

void close(){
    plik1.close();
    plik2.close();
}
};

int main(){
anagramy t1;

t1.open();

t1.anagram();

t1.close();

    return 0;
}
