#include "TestBed.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"

TestBed::TestBed() {
    int k;
    cout << "Type a number to select kth term of array" << endl;
    cin >> k;
    int type;
    cout << "Type 1 or 2 to select algorithm" << endl;
    cin >> type;
    this->setAlgorithm(type, k);
}
    void TestBed::setAlgorithm(int type, int k) {
        if (type == 1) {
            SelectionAlgorithm* ptest = new AlgorithmSortAll();
            //ptest->print();
        }
        else if (type == 0) {
            SelectionAlgorithm* ptest = new AlgorithmSortK();
            //ptest->print();
        }else{
            cout << "Type only 0 or 1 to select algorithm" << endl;
    }
        /*TestBed::~TestBed() {

        }*/
};