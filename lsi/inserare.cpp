#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *urm;
};

void inserare_inainte_q(nod * & prim, nod * q, int x){
    nod* nou = new nod;
    nou -> info = x;
    if (q == prim)
    {
        nou -> urm = q;
        prim = nou;
        return;
    }
    nod *p=new nod;
    for(p=prim;p->urm!=q;p=p->urm);
    p -> urm = nou;
    nou -> urm = q;

}

void inserare_dupa_q(nod *q,int x){
    nod *p = new nod;
    p->info=x;
    p->urm=q->urm;
    q->urm=p;

}
void pushback(nod *&prim,int x){
    nod *nou = new nod;
    nou->info=x;
    nou->urm=NULL;
    if(prim==NULL)
        prim=nou;
    else{
        nod *c=prim;

        while(c->urm)
          c=c->urm;

        c->urm=nou;
    }
}
void pushfront(nod *&prim,int x){
    nod *nou = new nod;
    nou->info=x;
    if(prim==NULL)
        prim=nou;
    else{
        nou->urm=prim;
        prim=nou;
    }
}