
#include "exe_add_elems.h"

using namespace std;

// Exercise 9.18
void DivideListToTwoDeques() {

  int iarray[] = { 1, 2, 3, 4, 5 };

  list<int> il(iarray, iarray + 5);
  deque<int> idq1, idq2;

  for (list<int>::iterator iter = il.begin();
    iter != il.end(); iter ++) {

    int val = *iter;
    if (val % 2)
      idq1.push_back(val);
    else
      idq2.push_back(val);
  }

  stringstream ss;
  for (deque<int>::iterator iter = idq1.begin();
    iter != idq1.end(); iter ++) {
    ss << *iter << ", ";
  }
  for (deque<int>::iterator iter = idq2.begin();
    iter != idq2.end(); iter ++) {
    ss << *iter << ", ";
  }

  LOG(ss.str().c_str());
}

// Exercise 9.19: This section is quite weird and I can't get the point of it..
void InsertSomeValue() {

}
