#include<bits/stdc++.h>
using namespace std;
template<typename T, typename V>
class pair
{
    T x;
    V y;
    T setx(T x)
    {
        this->x = x;
    }
    V sety(V y)
    {
        this->y =y;
    }
    T getx()
    {
        return x;
    }
    V gety()
    {
        return y;
    }
}

main()
{
    // to create triplet using pair class
    pair<pair<int,int>,int> p1;
    p1.sety(10);
    pair<int,int>  p4;
    p4.setx(15);
    p4.sety(16);
    p2.setx(p4);
    cout<<p2.getx().getx()<<endl;
    
    
}

