#include "push_swap.h"
#include "stdio.h"

void	swap(int **array, int num1, int num2)
{
	int		temp1;
	int		*temp2;
	
	temp2 = *array;
	temp1 = temp2[num1];
	temp2[num1] = temp2[num2];
	temp2[num2] = temp1;
}

int		partition(int **array, int left, int right, int p)
{
	int		*temp;

	temp = *array;
    right -= 1;
    while(1)
    {
        while(temp[left] < p)
            left++;
		while(right > 0 && temp[right] > p)
			right--;
		if(left >= right) 
			break ;
		else
		swap(array, left, right);
   }
   swap(array, left, right);
   return (left);
}

void	sort(int **a, int left, int right)
{
	int		*array;
	int		p;
	int		partitionp;

	array = *a;
    if(right - left < 0)
        return ;
    else
    {
        p = array[right];
        partitionp = partition(a, left, right, p);
        sort(a, left, partitionp - 1);
        sort(a, partitionp + 1, right);
    }
}

int     *check_duplicate(int *array, int size)
{
    sort(&array, 0, size - 1);
    return (array);
}