#include "iostream"
#include "fstream"
#include "string.h"
#include "conio.h"
#define MAX 100
 #define inputfile "CEuler_3.txt"
using namespace std;
typedef struct GraphPractice
{
    int A[MAX][MAX];
    int n;
}Graph;
typedef struct Prepare_Stack
{
    int A[MAX];
    int size;
}Stack;
void Create_Stack(Stack &s){
    s.size = 0;
}
void Push_Value_To_Stack(Stack& s,int value){
    if(s.size + 1  > MAX){
        return;// full stack 
    }
    s.A[s.size] = value;
    s.size ++;
}
void Read_file(const char name_file[100],Graph& matrix){
    fstream f;
    f.open(name_file,ios::in);
    f>>matrix.n;
    for(int i = 0 ; i < matrix.n ; i++){
        for(int j=0 ;j<matrix.n;j++){
            f>>matrix.A[i][j];
        }
    }
    f.close();
    return;
}
void Record_File(Graph matrix){
    cout<<"\n Name file : "<<inputfile;
    cout<<"\n The element in Matrix : "<<matrix.n;
    cout<<"\n===================== Graph  ======================\n";
    for(int i = 0 ; i < matrix.n ; i++){
        for(int j = 0 ; j < matrix.n ; j++){
            cout<<" "<<matrix.A[i][j];
        }
        cout<<"\n";
    }
}
bool Check_Graph_Direction(Graph matrix){
    for(int i = 0 ; i < matrix.n ; i++){
        for(int j = 0 ; j < matrix.n ;j++){
            if(matrix.A[i][j] != matrix.A[j][i]){
                return false;
            }
        }
    }
    return true;
}
bool Check_Graph_weight(Graph matrix){
    for(int i = 0 ; i < matrix.n ; i++){
        for(int j = 0  ; j < matrix.n ; j++){
            if(matrix.A[i][j] < 0 || matrix.A[i][j] > 1 ){
                return true;
            }
        }
    }
    return false;
}
void Find_Path_Connection(Graph matrix,int Contain[],int Point_Start){
    for(int j =  0 ; j < matrix.n ; j++){
        if(matrix.A[Point_Start][j]!= 0 && Contain[Point_Start] != Contain[j]){
                Contain[j] = Contain[Point_Start];
                Find_Path_Connection(matrix,Contain,j);
        }
    }
}
int  Check_Connection(Graph matrix){
    int Ring[100];
    for(int i = 0 ; i < matrix.n ; i++)
        Ring[i] = 0;
        int count = 0;
    for(int i = 0 ; i < matrix.n ; i++){
        if(Ring[i] == 0){
        count++;
        Ring[i] = count;
        Find_Path_Connection(matrix,Ring,i);
        }
    }
    if(count == 1){
        cout<<"\n Have Connection";
        return 0;
    }else{
    cout<<"\n Dont have connection";
    cout<<"\n Amount Graph Connection : "<<count;
    for(int i = 1 ; i <=count;i++){
        cout<<"\n Element in Connection "<<i<<" : ";
        for(int j = 0 ; j < count*3;j++){
            if(Ring[j] == i){
                cout<<" "<<j;
            }
        }
        cout<<"\n";
        }
    }
    return 1;
}
void Find_Path_Circle_EULER(Graph& matrix,int Point_Check,Stack& s){
        for(int j = 0 ; j < matrix.n ; j++){
            if(matrix.A[Point_Check][j] != 0){
                matrix.A[Point_Check][j] = matrix.A[j][Point_Check] = 0;
                Find_Path_Circle_EULER(matrix,j,s);
            }
        }
        Push_Value_To_Stack(s,Point_Check);
}
int Check_Top_Lever_Odd(Graph matrix,int top){
        int count = 0 ;
        for(int i = 0 ; i < matrix.n ; i++){
            if(matrix.A[top][i] != 0 ){
                count++;
            }
        }
    return count;
}
int Amount_Top_Lever_Odd_Of_Graph(Graph matrix){
    int count = 0;
    for(int i = 0 ; i < matrix.n ; i ++){
        if(Check_Top_Lever_Odd(matrix,i)%2!=0){
            count++;
        }
    }
    return count;
}
int Check_Circle_EULER(Graph& matrix){
    int x = 2;
    Graph temp = matrix;
    Stack s;
    Create_Stack(s);
    Find_Path_Circle_EULER(temp,x,s);
    if(Amount_Top_Lever_Odd_Of_Graph(matrix) > 2 || Amount_Top_Lever_Odd_Of_Graph(matrix) == 1 ){
        cout<<"\n Don't enough condition , have more than two vertices odd ";
    }else if(Amount_Top_Lever_Odd_Of_Graph(matrix) == 2){
        cout<<"\n Case have two vertices odd  ";
        if(Check_Top_Lever_Odd(matrix,x)%2==0){
            cout<<"\n Need start at vertices odd, plese try value input";
        }else{
            cout<<"\n Circle EULER is ";
            for(int i = s.size -1; i >= 0 ; i--)
            {
            cout<<s.A[i]<<" ";
            }
        }
    }else if(Check_Connection(matrix)==0){
        cout<<"\n Circle EULER is ";
        for(int i = s.size -1 ; i >= 0 ; i--){
            cout<<s.A[i]<<" ";
        }
    }
    return 1;   
}

int main(){
    Graph matrix;
    Read_file(inputfile,matrix);
    Record_File(matrix);
    if(Check_Circle_EULER(matrix)==1){
    }
} 