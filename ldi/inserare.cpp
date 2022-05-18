#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *urm,*ant;
};

void AdaugareFinal(nod * & prim , nod * & ultim, int x){
    nod *nou = new nod;
    nou->info=x;
    nou->urm=NULL;
    nou->ant=NULL;

  if(prim == NULL){
    prim=nou;
    ultim=nou;
  }
    else{
        nou->ant=ultim;
        ultim->urm=nou;
        ultim=ultim->urm;
    }

}
void InserareDupaQ(nod *& prim,nod *& ultim, nod * q,int x){
    nod *nou = new nod;
    nou->info=x;
    nou->urm=NULL;
    nou->ant=NULL;
    
    if(prim==NULL || ultim==NULL){
        prim=ultim=NULL;
    }else{
        nou->urm = q->urm;
        q->urm = nou;
        nou->ant=q;
    }
}

void AdaugareInceput(nod * & prim , nod * & ultim, int x){
    nod *nou = new nod;
    nou->info=x;
    nou->ant=NULL;
    
    if(prim==NULL){
        prim=nou;
        ultim=nou;
    }else{
        nou->urm=prim;
        if(prim==ultim)
            ultim=nou;
        prim=nou;
    
    }
}
void InserareInainteQ(nod *& prim,nod *& ultim, nod * q,int x){
    nod *nou = new nod;
    nou->info = x;
    if(q==prim || prim == NULL)
        AdaugareInceput(prim,ultim,x);
    else{
        nod *p = new nod;
        for(p=prim;p->urm!=q;p=p->urm);
        nou->urm=q;
        q->ant=nou;
        nou->ant=p;
        p->urm=nou;
    }
}
