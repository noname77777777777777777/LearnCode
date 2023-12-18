using System;
namespace variable{
    class Program{
        void Checknumber(int[] A,int k){
            Array.Sort(A);
            int count = 0;
            
            for(int i = 0;i<A.Length;i++){
                for(int j = i+1 ; j<A.Length;j++){
                    if(A[i]+A[j] == k){
                        count++;
                    }else if(A[i] == k){
                        count++;
                    }
                }
           }
            return count
        }
        static void main(string[] args){

        }
    }
    
}