/*
 * Problem link : https://cses.fi/problemset/task/1730
 * Prereq:
 * -----> Basic understanding of Game theory and Nim game:
 *        https://cses.fi/book/book.pdf   (Chapter 25, first 2 sections)
 * 
 * This is a literal application of Nim game where the person who starts the game
 * wins if the XOR of all piles is positive, and loses otherwise.
 * 
 * More resource: https://cp-algorithms.com/game_theory/sprague-grundy-nim.html#application-of-the-theorem
 * 
 * Runtime O(n)
 * */
#include "bits/stdc++.h"

using namespace std;

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int exort = 0;
    for(int i=0; i<n; i++){
      int a; scanf("%d", &a);
      exort ^= a;
    }
    printf("%s\n", exort ? "first" : "second");
  }
  
  return 0;
}
