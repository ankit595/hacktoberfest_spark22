#include<iostream>



int search(int arr[],int b, int ele)
{
	if(sizeof(arr)>=0)
	{
		if(arr[b]==ele)
			return b+1;
		else
			return search(arr,b+1,ele);
	}	
    else 
		return 0;		
}
int main()
{
	int i,n,ele,add,b=0;
	printf("Enter the number of element");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Enter the element to search");
	scanf("%d",&ele);
	 
	add=search(arr,b,ele);
	
	if(add!=0)
		printf("element found at position %d",add);
	else
		printf("element not found ! ");
	    
}
