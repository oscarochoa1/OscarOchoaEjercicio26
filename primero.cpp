#include<iostream>

using 
namespace std;

void relleno(int l,int *m);

void imprime(int l,int *m);

int main(){

/*define el numero de entrada y crea la matriz*/
int l=0;
   int i,j; 
 

cin>>l;


int *m;
  m = new int [l];


relleno(l,m);
imprime(l,m);
    
return 0;
}

/*rellena la matriz*/
void relleno(int l,int *m){
    int i=1;
    if(i<0){
        m[i]=0;
    
    }
    else if(m[i]==0) {m[i+1]=1;}
    else{
for ( i =1; i< l; i++){
        m[i+1]=m[i]*i;
}
    
}
}



void imprime (int l,int *m){
int i;
 

for (i=0; i <l;i++) {

cout<<" "<<m[i]<<" ";

}

cout<<endl;



}