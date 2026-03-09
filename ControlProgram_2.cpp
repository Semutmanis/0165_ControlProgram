#include <iostream>
using namespace std;

float rata_rata(float a, float b){
  return (a+b)/2;
}

string status_lulus(float r){
  if (r >= 60)
    return "lolos";
  else
    return "gagal";
}

int main(){
  float nilbi, nilmt, rerata;
  string status;

  cout << "mauskan nilai bahasa inggris = ";
  cin >> nilbi;
  cout << "masukan nilai matematika = ";
  cin >> nilmt;

  //rerata = (nilbt+nilmt)/2;
  //if (rerata >= 60)
  // status = "lolos";
  //else
  // status = "gagal";
  rerata = rata_rata(nilbi,nilmt);
  //status = status_lulus(rerata);

  cout << "status kelulusan = " << status_lulus(rerata) <<" ,dengan nilai rearata = " << rerata << endl;
  
}