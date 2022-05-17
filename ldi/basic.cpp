#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *urm,*ant;
};

bool Palindrom(nod* prim, nod* ultim){
int ok=1;
while(ok && prim != ultim){
    if(ultim->info != prim->info){
       ok=0;
    }
    ultim=ultim->ant;
    prim=prim->urm;
}
return ok;
}