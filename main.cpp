#include <iostream>
#include <ctime>

using namespace std;

bool arr[3][3]{
        {false,false,false},
        {false,false,false},
        {false,false,false}
    };

void placeDot(){
    srand(time(NULL));

	for(int i=0; i<3;i++){
		int pos_x = rand()%3;
        int pos_y = rand()%3;

        if(!arr[pos_x][pos_y])
            arr[pos_x][pos_y]=true;
        else
        {
            int pos_x = rand()%3;
            int pos_y = rand()%3;
            arr[pos_x][pos_y]=true;
        }

	}
}

void guessDots(){
    int life{3};
    while(life!=0){
            int x{-1},y{-1};
        cout<<"Please enter an corrdinate (0.0 to 2.2)"<<endl;
        cin>>x>>y;


        if(arr[x][y]){
            cout<<"You found one of the points"<<endl;
        }
        else
        {
            cout<<"try again you have "<<--life<<" lifes left"<<endl;
        }
    }
    cout<<"Game is over... :("<<endl;
}
int main()
{
    placeDot();
    guessDots();


    return 0;
}
