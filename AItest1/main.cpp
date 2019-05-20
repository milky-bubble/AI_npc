#include <iostream>
#include "AI.h"
using namespace std;

class AI{
    private int block[WIDTH][HEIGHT];
    private bool record[WIDTH][HEIGHT];
    //calculate the safe region
    void computeSafeRegion(){
        int countTime[WIDTH][HEIGHT]={0};//calculate if the bomb is still there
        //deal with the exploring bomb
        for(int i=0;i<WIDTH;i++)
        {
            for(int j=0;j<HEIGHT;j++)
            {
                if(block[i][j]==FLOOR||block[i][j]==BUBBLEWAVE)//only floor can walk on
                {
                    if(countTime>=delay)
                    {
                        record[i][j]=true;
                        countTime[i][j]=0;
                    }
                    else{
                        record[i][j]=false;
                        countTime[i][j]++;
                    }
                }
                else{
                    record[i][j]=false;
                    countTime[i][j]=0;
                }
            }
        }
        //deal with the bomb in the future
        for(int i=0;i<WIDTH;i++)
        {
            for(int j=0;j<HEIGHT;j++)
            {

            }
        }

    }

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
