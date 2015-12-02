
#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <string>

#include "tut_insert.h"
#include "../utils.h"

using namespace std;

// Simply insert string "Beth" in front of the vector and the list.
void InsertStringToVecAndList() {
  string spouse("Beth");

  vector<string> svec;
  list<string>   slist;

  svec.insert(svec.begin(), spouse);
  slist.insert(slist.begin(), spouse);

  // check the output
  for (vector<string>::iterator iter = svec.begin();
    iter != svec.end();
    iter ++) {
      LOG((*iter).c_str());
    }

  for (list<string>::iterator iter = slist.begin();
    iter != slist.end();
    iter ++) {
      LOG((*iter).c_str());
    }
}

// First insert 4 number of strings with value Mary, and an array of 4
// different strings. All the strings will be pushed front to the front of
// vector.
void InsertRangeOfStrings() {
  vector<string> svec;

  string sarray[] = { "quasi", "simba", "frollo", "scar" };

  svec.insert(svec.begin(), 4, "Mary");
  svec.insert(svec.begin(), sarray, sarray + 4);

  // check the output
  for (vector<string>::iterator iter = svec.begin();
    iter != svec.end();
    iter ++) {
      LOG((*iter).c_str());
    }

  // LIST
  list<string> slist;
  slist.insert(slist.begin(), sarray+2, sarray+4); // "frollo", "scar"
  for (list<string>::iterator iter = slist.begin();
    iter != slist.end();
    iter ++) {
      LOG((*iter).c_str());
    }
}
