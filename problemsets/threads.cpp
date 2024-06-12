#include <iostream>
#include <bits/stdc++.h>
#include <thread>

using namespace std;

void t (int id){
    cout << id << endl;
}

int main(){
    thread th1 = thread(t, 1);
}