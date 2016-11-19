__author__ = 'Paarth Bhasin'

'''
Function: find_max_sum_interval(a_list):

    Preconditions: a_list contains only numbers
    Postconditions: We get the interval in a_list which has the maximum sum.

    TEST CASES:
        VALID TEST CASES: a_list is a list which contains only integers
            Input:
                [-1,-2,3,-14]

            Output:
                Maximum Sum: 3
                Sliced List: 3
                Start: 2
                End: 2
        INVALID TEST CASES: a_list doesn't contain only integers
                Input:
                    ['b',1,2,'c']

                Output:
                    unsupported operand type(s) for +=: 'int' and 'str'

    Best Case Complexity: O(N)
    Worst Case Complexity: O(N^2)
'''

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/time.h>



void find_max_sum_interval(char *a_list){
    int max = 0, min = 0;
    sum_max = a_list[0];
    n = sizeof(a_list);
	int count = 0;
	# List containing sliced list.
    char *a;
    bool summed=false;

    for (int i = 0; i < n; i++){
        sum = a_list[i];
        if sum > sum_max
            sum_max = sum;
        for (int j = i+1; j < n; j++){
            sum += a_list[j];
            if sum > sum_max{
                sum_max = sum;
                # Meaning there are negative numbers prior to a_list[j] which should be neglected.
                if a_list[j] > sum_max{
                    sum_max = a_list[j];
                    a = a_list[j];
                    max = j;
                    min = j;
				}
                else{
					count = 0;
					for (int k=min; k<=max; k++){
						a[count] = a_list[k];
						max = j;
						min = i;
						count++;
					
					} 
				}
                summed = true;
			}
            if summed == false && a_list[j] > sum_max{
                a = a_list[j];
                sum_max = a_list[j];
                max = j;
                min = j;
			}
            else if summed == False
                a = a_list[0];
		}
		count = 0;
		for (k=min; k<=max; k++){
			a[count] = a_list[k];
			count++;
		}
	}

    printf("Maximum Sum: %d", sum_max);
    printf("Sliced List: %s", a);
    printf("Start: %d", min);
    printf("End: %d", max);
}

int main(){
	int array[4] = {1, 2, 3, 4};
	find_max_sum_interval(array);
	return 0;
}
