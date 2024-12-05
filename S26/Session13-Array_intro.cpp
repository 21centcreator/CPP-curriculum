#include<iostream>
using namespace std;


int main()
{

int highscores[5] = {98,99,89,99,97};
int total =0;
cout<< "Top 5 High Scores"<<endl;
for(int i=0; i<5; i++){
    cout<<"Score :"<<i+1 <<": "<<highscores[i]<<endl;
    total +=highscores[i];
}

cout<<"Total :"<<total<<endl;
cout<<"Average :"<<(float)total/5<<endl;

return 0;
}