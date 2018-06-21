#include <iostream>
#include <list>

using namespace std;

struct key {
  string name;
};

struct team {
  string name;
  int points;
  struct key key;
  list<struct team> adv;
};

int main(void) {
  struct key a;
  a.name = "a";

  struct team isrs;
  isrs.name = "Isurus";
  isrs.points = 12;
  isrs.key = a;

  struct team bgh;
  bgh.name = "BGH";
  bgh.points = 15;
  bgh.key=a;

  struct team bd;
  bd.name = "Black Dragons";
  bd.points = 5;
  bd.key=a;

  struct team pain;
  pain.name = "PainGmng";
  pain.points = 14;
  pain.key=a;

  list<struct team> teams;

  teams.push_front(bgh);
  teams.push_front(pain);
  teams.push_front(bd);
  teams.push_front(isrs);

  list<struct team>::iterator it;
  list<struct team>::iterator tt;

  for(it = teams.begin(); it != teams.end(); ++it){
    for(tt = teams.begin(); tt != teams.end(); ++tt){
      it->adv.push_front(*tt);
    }
  }

  list<struct team>::iterator id;
  list<struct team>::iterator dd;

  for(id = teams.begin(); id != teams.end(); ++id){
    cout << id->name << " " << id->key.name << " ";
    cout << "*";
    for(dd = dd->adv.begin(); dd != dd->adv.end(); ++dd){
      cout << "!";
      cout << dd->name << endl;
    }
  };
  return 0;
}
