#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *urm,*ant;
};

void StergeQ(nod * & prim, nod * & ultim, nod * q)
{
    if(prim==q && prim!=NULL)
    {
        prim=prim->urm;
    }
    else if(ultim == q)
    {
        q->ant->urm=NULL;
    }
    else if(q!=NULL)
    {
        q->ant->urm=q->urm;
        q->urm->ant=q->ant;
    }

}