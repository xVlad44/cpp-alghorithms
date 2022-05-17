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
//#3801
struct Nod
{
    int info;
    Nod *leg;
};

void LsiInterclasare(Nod *nod1, Nod *nod2, Nod *&final){

    Nod *aux;

    if(nod1->info<=nod2->info){
        final=nod1;
        nod1 = nod1->leg;
    }else {
        final=nod2;
        nod2=nod2->leg;
    }

    while(nod1&&nod2){
        if(nod1->info<=nod2->info){
            aux->leg=nod1;
            aux=nod1;
            nod1=nod1->leg;
        }
        else{
            aux->leg=nod2;
            aux=nod2;
            nod2=nod2->leg;
        }
    }
    while(nod1){
        aux->leg=nod1;
        aux=nod1;
        nod1=nod1->leg;
    }
    while(nod2){
        aux->leg=nod2;
        aux=nod2;
        nod2=nod2->leg;
    }
}