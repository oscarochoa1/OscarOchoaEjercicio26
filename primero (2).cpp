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
    int i=0;
    
	/*acá se rellenó la matriz determinando lo necesario para el caso de i=0 y de i=1, con lo que se determinó su factorial*/
for ( i =0; i< l; i++){
    if(i==0) {
        m[0]=1;
    }
    else if (i==1){
        m[1]=1;
    }
    else{
    m[i]=i*(i-1);
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