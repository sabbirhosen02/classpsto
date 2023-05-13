#include<iostream>
using namespace std;

class Order{
    private:
    int OrderID;
    string DeliveryLocation;
    float DiscountPercentage;
    float Price;
    public:
    Order(int o,float p){
        OrderID=o;
        Price=p;
    }
    void SetLocation(string n){
        DeliveryLocation=n;
    }
    string GetLocation(){
        return DeliveryLocation;
    }
    void SetDiscountPercentance(float a){
        DiscountPercentage=a;
    }
    float GetDiscountpercentance(){
        return DiscountPercentage;
    }
    void ShoworderDetails(){
        cout<<"Order Id is: "<<OrderID<<endl;
        cout<<"Delivery location is: "<<DeliveryLocation<<endl;
        cout<<"Original Price is: "<<Price<<" Tk"<<" and extra 50Tk for delivary charge."<<endl;
        cout<<"Discount Percentage is: "<<DiscountPercentage<<"%"<<endl;
        cout<<"Total Price is: "<<(Price-((Price*DiscountPercentage)/100))+50<<endl;
    } 
};

int main(){
    Order X1(101, 999.99);
    X1.SetLocation("Bashundhara R/A, Block C, H/N-176");
    X1.SetDiscountPercentance(10);
    X1.ShoworderDetails();
}
