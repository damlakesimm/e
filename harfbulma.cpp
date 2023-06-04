#include <iostream>
using namespace std;
int main(){
    
    string cumle;
    int toplam = 0;

    cout<<"bir cumle giriniz"<<endl;
    getline(cin, cumle);
    char harf;
    cout<<"aramak istediginiz harfi giriniz"<<endl;
    cin>>harf;
    
    for (int i = 0; i < cumle.length(); i++)
    {
        char ara = cumle[i];
        if (ara==harf)
        {
            toplam++;
        }
    }
    cout<<cumle<<"cümlesinde "<<harf<<" harfinden "<<toplam<<" tane vardir.";

    return 0;
}