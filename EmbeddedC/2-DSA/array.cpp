#include<iostream>


class array{

    private: 
      int *ptr;
      int size; 
      int capacity;

    public:

    array(int *ptr1,int size1, int capacity1)
    {
        ptr=ptr1;
        size=size1;
        capacity =capacity1;
    }
    
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
      int *pts =ptr;
      capacity *=2;
      ptr = new int(capacity);
      for (int i =0; i<size ;i++)
      {
        ptr[i]=pts[i];
      }
     }
     void add(int x)
     { 
       if (size == capacity)
       {
        bigsize();
       }

      else{
          size++;
          ptr[size-1]=x;
      }
     }

     void insert(int x , int y)       //y is the index
     {
       if (y>size|| y<0){
          std::cout<<"invalid index\n";
          return;
       }
       
      if(size==capacity)
      {
         bigsize();
         
      }
      size ++;
     
        for (int i=size-1 ; i>y;i--)
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
        
       size--;
     }
 
     void search(int x)
     {
      if(x>=size ||x<0)
        {
          std::cout<<"invalid index\n ";
          return;
        }
        int flag=0;
      for (int i=0; i< size ; i++)
      {
        if (ptr[i]==x)
        {
          std::cout << i+1 << "\n";
          flag++;
        }

      }
      if(!flag)
        std::cout << "not found\n";
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
      int y=size-1;
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
      for (int i=n; i<size;i++)
      {
        ptr [i-n]=ptr[i];
        
      }
      for (int i=size-1 ;i>=size-n;i--)
      {
        ptr[i]=0;
      }

     }
 
     void rotate(int n)
     {
     
      int temp[size];
      for (int i=0;i<size;i++)
      {
        temp[i]=ptr[i];
      }
        for (int i=n; i<size;i++)
      {
        
        ptr [i-n]=ptr[i];
        
      }
      
      for (int i=0;i<n;i++)
      {
        ptr[(size-n)+i]=temp[i];
      }
     
     }
     void merge(array a2)
     {
      while(capacity <= size +a2.size)
      {
        bigsize();
     
      }
 
      

      for (int i =0; i<size+a2.size; i++)
      {
        ptr[i+size]=a2.ptr[i];
      }
      size=size+a2.size;
        

     }

     int sum()
     {
      int sum=0;
      for(int i=0; i<size ; i++)
      {
        sum+=ptr[i];
      }
       return sum;
     }
     void avr()
     {
      int avr;
       avr=sum()/size;
       std::cout<<avr<<"\n";
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

int main(){
    
    int a1[]={1,2,3,4,5,6};
    int s=6;
    int c=10;

    int a2[]={9,9,9};
    int s2=3;
    int c2=5l;
    array aa(a2,s2,c2);

    array a(a1,s,c);
    a.display();
    std::cout<<"===========ADD===========\n";
    a.add(7);
   a.display();
 std::cout<<"============INSERT==========\n";
   a.insert(8 ,3);
   a.display();
   std::cout<<"==========DELETE==========\n";
   a.deletee(4);
   a.display();
   std::cout<<"=========search===========\n";
   a.search(6);
   a.search(4);
   std::cout<<"===========GET============\n";
   a.get(1);
   a.get(9);
   std::cout<<"===========SET============\n";
   a.set(4,5);
   a.display();
   std::cout<<"===========MAX============\n";
   a.max();
   std::cout<<"===========MIN============\n";
   a.min();
   std::cout<<"=========REVERSE==========\n";
   a.reverse();
   a.display();
   std::cout<<"===========SHIFT============\n";
   a.shift(1);
   a.display();
   std::cout<<"===========ROTATE============\n";
   a.rotate(2);
   a.display();
   std::cout<<"============MERGE============\n";
   a.merge(aa);
   a.display();
   std::cout<<"=============SUM=============\n";
   std::cout<<a.sum()<<"\n";
   std::cout<<"=============AVR=============\n";
   a.avr();
   std::cout<<"===========REPLACE===========\n";
   a.replace(5,8);
   a.display();

}