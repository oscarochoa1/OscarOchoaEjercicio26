#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

float * read_file(string filename, int *n_points);
float add_values(float *x, float *y, int n_points);
void ejemplo_escribe(string filename);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
    string filename;
    filename = "multiplicadas.dat";
  ejemplo_escribe(filename);
    
  cout << add_values(x,y, n_x) << " " << add_values(x,y, n_y) << endl;
  
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}

/*multiplica los valores*/
float add_values(float *x, float *y, int n_points){
  float a=0;
  int i;
  
  for(i=0;i<n_points;i++){
    a = x[i]*y[i];
  }
    cout << a << " " << endl;
  return a;
}

void ejemplo_escribe(string filename){
  ofstream outfile;


  outfile.open(filename);

  cout << "Escribiendo en " << filename << endl; 
  for (int i=0; i < 10; i++){
    outfile << i << endl;
  }
  outfile.close(); 
}
