#include<iostream>

using namespace std;

int m=50;

class ITEMS{
        int itemCode[50];
        float itemPrice[50];
        int count;
    public : 
        void CNT(void){
            count =0;
        }
        void getitem(void);
        void displaySum(void);
        void remove(void);
        void displayItems(void);
};

void ITEMS :: getitem(void){
    cout<<"Enter item code :\t";
    cin>>itemCode[count];

    cout<<"Enter item cost :\t";
    cin>>itemPrice[count];
    count++;
}

void ITEMS :: displaySum(void){
    float sum =0;
    int i;
    for (i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];

        cout<<"\n Total value :\t"<<sum<<"\n";
    }
    
}
void ITEMS :: remove(void){
        int a;
        cout<<"Enter item code :\t";
        cin>>a;

    int i;
        for (i = 0; i < count; i++)
        {
            if (itemCode[i] == a)
            {
                itemCode[i]=0;
            }
            
        }
        
}

void ITEMS :: displayItems(void){
    cout<<"\nCode price \n";

    int i;
    for (i = 0; i < count; i++)
    {
        cout<<"\n"<<itemCode[i];
        cout<<"   "<<itemPrice[i];
    }
    cout<<"\n";
}

int main(){

    ITEMS order;
    order.CNT();
    int x;

    do{
        cout<<"\nYour do the following;"<<"Enter appropriate number \n";

        cout<<"\n1: Add an item";
        // cout<<"\n2: Add an item";
        cout<<"\n2: Display total value";
        cout<<"\n3: Delete an item";
        cout<<"\n4: Display all items";
        cout<<"\n5: Quit";

        cout<<"\n\nWhat is your option?";

        cin>>x;

        switch (x)
        {
        case 1:
                order.getitem();
            break;
        case 2:
                order.displaySum();
            break;
         case 3:
                order.remove();
            break;
         case 4:
                order.displayItems();
            break;
         case 5:
               
            break;
        default:
                cout<<"Error is input; try again\n";
        }
    }while (x != 5);
   
    return 0;
}