#include <iostream>
#include <cstdlib>
#include <time.h> 
#include <ctime> 

using namespace std;

int  rangenerator() {

         int randomnum = rand() % 2;
       // cout << randomnum << endl;
        return randomnum;
    
}

int friends(int k, int h, int r, int v, int a) {

    bool kk = !!k;
    bool hh = !!h;
    bool rr = !!r;
    bool vv = !!v;
    bool aa = !!a;

   if ((kk || hh) && ((rr && (!vv)) || (!rr && vv)) && (!aa || rr) && ((vv && kk) || (!vv && !kk)) && (!hh || (aa && kk))) {
     // cout << endl << kk << hh << rr << vv << aa << endl;
        return 1;
    }
    else
    return 0;
}



int main()
{
    int k, h, r, v, a;
    srand(time(0));

    while (1) {

        k = rangenerator();
        h = rangenerator();
        r = rangenerator();
        v = rangenerator();
        a = rangenerator();

        bool rrr = friends(k, h, r, v, a);
        //cout << k << h << r << v << a << endl;

        if (rrr) {
            cout << k << h << r << v << a<<endl;
            cout << "Kevin, Vijay, are chatting";
            break;
        }

    }

    return 0;

}
