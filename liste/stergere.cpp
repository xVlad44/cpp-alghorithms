#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *urm;
};

void sterge_nod_q(nod *&prim,nod *p){
    if(prim==p){
        prim=prim->urm;
        return;
    }
    nod *q=prim;
    while(q->urm != p)
        q=q->urm;

    if(p==NULL)
        q->urm=NULL;
    else
        q->urm=p->urm;
}
