#include <iostream>

using namespace std;

void dizidekiElemanlariGoruntule(int *sayilarinadresi,int boyut) {

    for(int i=0;i<boyut;i++)
        //cout<<sayilarinadresi[i]<<endl;
        cout<<*(sayilarinadresi +i)<<endl;

}


int main()
{
    int sayilar[] = {5,10,15,20};
    dizidekiElemanlariGoruntule(sayilar,4);
    return 0;
}
