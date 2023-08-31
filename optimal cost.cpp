#include <stdio.h>
#define MAX_CONTAINERS 100
#define MAX_ITEMS 100
struct Container 
{
    int capacity;
    int currentLoad;
};
struct Item 
{
    int weight;
    int containerIndex;
};
void initializeContainers(struct Container containers[], int numContainers, int containerCapacity) 
{
    for (int i = 0; i < numContainers; i++) 
	{
        containers[i].capacity = containerCapacity;
        containers[i].currentLoad = 0;
    }
}
void loadItems(struct Container containers[], struct Item items[], int numItems) 
{
    for (int i = 0; i < numItems; i++) 
	{
        for (int j = 0; j < MAX_CONTAINERS; j++) 
		{
            if (containers[j].currentLoad + items[i].weight <= containers[j].capacity) 
			{
                containers[j].currentLoad += items[i].weight;
                items[i].containerIndex = j;
                break;
            }
        }
    }
}

void printContainerContents(struct Container containers[], int numContainers) 
{
    for (int i = 0; i < numContainers; i++) 
	{
        printf("Container %d: Load %d / Capacity %d\n", i, containers[i].currentLoad, containers[i].capacity);
    }
}

int main() 
{
    struct Container containers[MAX_CONTAINERS];
    struct Item items[MAX_ITEMS];
    int numContainers, containerCapacity, numItems;
    printf("Enter the number of containers: ");
    scanf("%d", &numContainers);
    printf("Enter the capacity of each container: ");
    scanf("%d", &containerCapacity);
    printf("Enter the number of items: ");
    scanf("%d", &numItems);
    printf("Enter the weight of each item:\n");
    for (int i = 0; i < numItems; i++) 
	{
        scanf("%d", &items[i].weight);
        items[i].containerIndex = -1;
    }
    initializeContainers(containers, numContainers, containerCapacity);
    loadItems(containers, items, numItems);
    printf("\nContainer Loading Result:\n");
    printContainerContents(containers, numContainers);
    return 0;
}

