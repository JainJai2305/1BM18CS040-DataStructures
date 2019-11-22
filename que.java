import java.util.* ;

interface Inqueue
{
	public void insert (int value ) ; 
	public void del() ;
	public void disp() ; 
}

class  QueueTest implements Inqueue
{
	int size=10 ,front=0,rear=-1 ;
	
	int arr[]=new int[size] ;
	
	void insert(int value ) 
	{
		if(rear >= size-1)
		{
			size=size*2 ;
			int arrt[]=new int[size] ;
			for(int x=0;x<size;x++)
			{
				arr[x]=arrt[x] ;
			}
			arr=arrt ;
		}
		rear=rear+1 ;
		arr[rear]=value ;
	}
		
	void del() 
	{
		if(front>rear) 
		{
			System.out.println("queue is empty") ;
		}
		else
		{
			System.out.println(arr[front]+"  is deleted") ;
			front=front+1 ;		
		}
	}
	
	void disp() 
	{
		if(front>rear) 
		{
			System.out.println("queue is empty") ;
		}
		else
		{
			System.out.println("the elements are :") ;
			for(int x=front ; x<=rear ; x++)
			{
				System.out.println(arr[x])  ;
			}
		}
	}
}

class Que
{	public static void main(String args[])
{
	QueueTest q1=new QueueTest () ;
	int ch=0,ele ;
	Scanner sc=new Scanner(System.in) ;
	System.out.println("enter your choice 1 for inserting element\n 2 for deletion \n3 fordisplay \n 0 to exit") ;
	ch=sc.nextInt() ;
	while(ch!=0)
	{
		if(ch==1)
		{
			System.out.println("enter the element :") ;
			ele=sc.nextInt() ;
			q1.insert(ele) ;
		}
		if(ch==2)
		{
			q1.del() ;
		}
		if(ch==3)
		{
			q1.disp() ;
		}
		System.out.println("enter your choice 1 for inserting element\n 2 for deletion \n3 fordisplay \n 0 to exit") ;
		ch=sc.nextInt() ;
	}
}
}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
						
