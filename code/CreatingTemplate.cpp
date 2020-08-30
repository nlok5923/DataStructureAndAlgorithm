//learning templates 
//creating pair class
template <typename T,typename V> //compiler shati raki t ko temproray datatype use kar rahe shati
class pair{
    T x;
    V y;// y v type ka hai
    public:
    void setX(T x){
        this->x = x;
    }
    T getX(){
        return x;
    }
    void setY(){
        this->y = y;
    }
    V getY(){
        return y;
    }
}
// if we want a double pair then we has to change int to souble just
//creating template
int main()
{ 
  //ye datatype T ko mil jayega
    pair<int> p1
    pair<double> p2;//double ka pair banagaya maja aagay
    //now e need par with int x and double y;
    pair<int,double> p1;
    
}
//instead pair now we need  triplet
// template<typename T, typename V, typename W>
// class triplet{
//     T x;
//     V y;
//     W z;
    
// }
    /*   T     *//* V*/
pair<pair<int,int>,int> p2;
//p2 is now a triplet
p2.getX().getX();//x value of pair
pair<int , int>p4;
p2.setX(p4);

//let form tripltet with first value int, second double, third char 

pair<int, pair<double ,char>>p5;








