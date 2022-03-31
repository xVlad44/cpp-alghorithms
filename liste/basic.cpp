#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *urm;
};

void init(nod *& prim,nod *& ultim){
    prim=ultim=NULL;
}

void parcurgere(nod *prim){
    for(nod *p=prim;p;p=p->urm)
        cout<<p->info<<" ";
}

void sortareCrescator(nod *&prim){
    nod *pi=new nod,*pj=new nod;
    for(pi=prim;pi;pi=pi->urm)
        for(pj=pi->urm;pj;pj=pj->urm)
            if(pi->info > pj->info){
                int aux = pi -> info;
                pi -> info = pj -> info;
                pj -> info = aux;

            }

}

void oglindire(nod *&prim){
    nod *last = NULL;
    nod *current = prim;
    
    
    while(current){
        nod *next = current->urm;
        current->urm=last;
        last=current;
        current=next;
    }
    prim=last;
}