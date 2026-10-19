#include<iostream>

class array{

    private: 
      int *ptr;
      int size; 
      int capacity;

    public:
    
     void display( )
     {
        
        
        for(int i=0 ; i<size ; i++)
        {
            std::cout<<ptr[i]<<" ";
        }
        std::cout<<"\n";
     }

     void bigsize()
     {
      ptr = new int(2*capacity);
     }
     void add(int x)
     { 
       if (size == capacity)
       {
        bigsize();
       }

      
          size++;
          ptr[size]=x;
       
     }

     void insert(int x , int y)       //y is the index
     {
       if (y>=size || y<0)
          std::cout<<"invalid index\n";
       if(size=capacity)
         bigsize();
        
         size++;
        for (int i=size-1 ; i>=x ;i--)
        {
          ptr[i]=ptr[i-1];
        }

        ptr[y]=x;
     }

     void deletee(int y)
     {
      if(y>=size || y<0){
        std::cout<<"invalid index \n";

       return;
      }
       for (int i=y ; i< size ;i++) 
       {
        ptr[i]=ptr[i+1];
       }   
        
       ptr[size-1]=0;
     }
 
     void search(int x)
     {
      if(x>=size ||x<0)
        {
          std::cout<<"invalid index\n ";
          return;
        }
      for (int i=0; i< size ; i++)
      {
        if (ptr[i]==x)
          std::cout << i << "\n";

      }
     }

     void get(int y)
     {
      if (y>=size || y<0){
        std::cout<< "invalid index \n";
        return;
      }
      else
        std::cout<< ptr[y] <<"\n";
     }

     void set(int x, int y)
     {
     if (y>=size || y<0){
        std::cout<< "invalid index \n";
        return;
      }
      ptr[y]=x;
     }

     void max()
     {
      int max = ptr[0];
      for(int i=1;i<size; i++)
      {
        if(ptr[i]>max)
          max =ptr[i];
      }
      std::cout<<max<<"\n";
     }
      
     void min ()
     {
      int min =ptr[0];
      for(int i=1; i<size ; i++)
      {
        if(ptr[i]<min)
          min =ptr[i];
      }
      std::cout<<min<<"\n";
     }
 
     void reverse()
     {
      int x=0;
      int y=size;
      int temp;
      while(!(x>=y))
      {
        temp=ptr[x];
        ptr[x]=ptr[y];
        ptr[y] =temp;
        x++;
        y--;
      }
     }

     void shift(int n)
     {
      for (int i=0; i<n;i++)
      {
        ptr [i]=ptr[n+i-1];
        ptr[size -n +i]=0;
      }

     }
 
     void rotate()
     {
      int temp;
        for (int i=0 ; i< size ;i++)
        {
          temp =ptr[i];
          ptr[i]=ptr[size+i-1];
          ptr[size+i-1]=temp;
        }
     }
     void merge(array a2)
     {
      while(capacity <= size +a2.size)
        bigsize();
     
 

      for (int i =0; i<size+a2.size; i++)
      {
        ptr[i+size]=a2.ptr[i];
      }
        

     }

     int sum()
     {
      int sum;
      for(int i=0; i<size ; i++)
      {
        sum+=ptr[i];
      }
      return sum;
     }
     int avr()
     {
      int avr;
       avr=sum()/size;
       return avr;
     }

     void replace(int x , int y)
     {
      if (x >=size||x<0 || y>=size || y<0)
       {
        std::cout<< "invalid index\n";
        return;
       }
       int temp;
       temp=ptr[x];
       ptr[x]=ptr[y];
       ptr[y]=temp;
     }
};