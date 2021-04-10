#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
int main() 
{
  srand(time(0));
  cout<<"Dev Wadhwa\n19BCE0444"<<endl;
  int arr[4][4];
  int gold[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  int b[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  int s[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  int pit[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  int temp_no_of_pit;
  int wampus[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  int wampus_i,wampus_j,temp_wampus_i,temp_wampus_j;
  cout<<"Enter the location of Wampus (Cannot be (1,1)) (row): ";
  cin>>temp_wampus_i;
  wampus_i=4-temp_wampus_i;
  cout<<"Enter the location of Wampus (Cannot be (1,1)) (column): ";
  cin>>temp_wampus_j;
  wampus_j=temp_wampus_j-1;
  wampus[wampus_i][wampus_j]=1;
  if(wampus_i+1<=3)
  s[wampus_i+1][wampus_j]=1;
  if(wampus_i-1>=0)
  s[wampus_i-1][wampus_j]=1;
  if(wampus_j-1>=0)
  s[wampus_i][wampus_j-1]=1;
  if(wampus_j+1<=3)
  s[wampus_i][wampus_j+1]=1;
  s[3][0]=0;
  temp_no_of_pit=1+(rand()%3);
  for(int i=0;i<temp_no_of_pit;i++)
  {
    int temp_pit_row=(rand()%4);
    int temp_pit_col=(rand()%4);
    pit[temp_pit_row][temp_pit_col]=1;
  }
  pit[wampus_i][wampus_j]=0;
  pit[3][0]=0;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(pit[i][j]==1)
      {
        if(i+1<=3)
        b[i+1][j]=1;
        if(i-1>=0)
        b[i-1][j]=1;
        if(j-1>=0)
        b[i][j-1]=1;
        if(j+1<=3)
        b[i][j+1]=1;
      }
    }
  }
  b[wampus_i][wampus_j]=0;
  b[3][0]=0;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(wampus[i][j]==1 || pit[i][j]==1)
      {
        b[i][j]=0;
        s[i][j]=0;
      }
    }
  }
  o:
  int temp_gold_row=rand()%4;
  int temp_gold_col=rand()%4;
  gold[temp_gold_row][temp_gold_col]=1;
  gold[3][0]=0;
  gold[wampus_i][wampus_j]=0;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(gold[i][j]==1 && pit[i][j]==1)
      {
        gold[i][j]=0;
      }
    }
  }
  int c=0;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(gold[i][j]==1)
      {
        c++;
        break;
      }
    }
  }
  if(c==0)
  {
  goto o;
  }
  cout<<endl;
  cout<<"WAMPUS LOCATION:"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<"\t";
    for(int j=0;j<4;j++)
    {
      cout<<wampus[i][j];
    }
    cout<<endl;
  }
  cout<<"STENCH LOCATION:"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<"\t";
    for(int j=0;j<4;j++)
    {
      cout<<s[i][j];
    }
    cout<<endl;
  }
  cout<<"PIT LOCATION:"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<"\t";
    for(int j=0;j<4;j++)
    {
      cout<<pit[i][j];
    }
    cout<<endl;
  }
  cout<<"BREEZE LOCATION:"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<"\t";
    for(int j=0;j<4;j++)
    {
      cout<<b[i][j];
    }
    cout<<endl;
  }
  cout<<"GOLD LOCATION:"<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<"\t";
    for(int j=0;j<4;j++)
    {
      cout<<gold[i][j];
    }
    cout<<endl;
  }
  return 0;
}
