#include <iostream>
#include <cstdlib>
#include "qB.h"

qB::qB(int qBB){
	n = qBB;

        while(1)
        {
                if(n==1)break;
                int a = 0;
                a = n%2;
                if(a == 1)
                        n = 3*n + 1;
                else
                        n = n/2;

                cout << n <<endl;
        }
}
