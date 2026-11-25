#include <iostream>
using namespace std;
int main(){
    int bal;
    cout << "bal daxil edin: ";
    cin >> bal;
    if((bal >= 51) && (bal <= 100)){
        cout << "kecdiniz" << endl;
        if(bal >= 91){
            cout << "siz teqaud qazandiniz" << endl;
        }
}
else if ((bal >= 0) && (bal <= 50)){
    cout << "Kesildiniz" << endl;
}
else{
    cout << "sehv bal daxil etdiniz" << endl;
}
return 0;
}