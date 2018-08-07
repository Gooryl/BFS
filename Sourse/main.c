#include "stdio.h"
#include "stdlib.h"
#include "../Header/main.h"

int main()
{
    unsigned char matrixSize = 0;
    unsigned char inputBuffer[MAX_DIGITS] = {0};
    unsigned char* pAdjacencyMatrix = NULL;
    unsigned char* pQueue = NULL;
    unsigned char* pList = NULL;

    printf("This programm is intended to perform a breadth-first search \nEnter the amount of nodes in graph: ");
    if ( ( !input_check(inputBuffer, &matrixSize ) ) || (matrixSize <= 1))
    {
        do
        {
            printf("Wrong input. The number must consist of only digits and be greater than 1.\n Enter the amount of nodes in graph: ");
        } while ((!input_check(inputBuffer, &matrixSize)) || (matrixSize <= 1));
    }

    printf("Enter the adjacency matrix:\n");

    pAdjacencyMatrix = (unsigned char*)malloc(matrixSize * matrixSize * sizeof(unsigned char));
    pQueue = (unsigned char*)malloc(matrixSize * sizeof(unsigned char));
    for (int i = 0; i < matrixSize; i++)
    {
        *(pQueue + i) = 0;
    }
    pList = (unsigned char*)malloc(matrixSize * sizeof(unsigned char));

    adjacency_matrix_builder(matrixSize, pAdjacencyMatrix);
    BFS(pQueue, pAdjacencyMatrix, matrixSize, pList);
    for (int i = (matrixSize -1); i >= 0; i--)
    {
        printf("%d -> ", *(pList + i));
    }

    printf("\b\b\b   \n");

    getchar();
    return 0;
}

//Take the input buffer, check input and convert it to number
unsigned char input_check(unsigned char* buffer, unsigned char* output)
{
    unsigned char* p = buffer;
    while ((*(p++) = (unsigned char)getchar()) != '\n');
    *(--p) = '\0';

    int array_length = 0;
    char* local_array = 0;
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if ((buffer[i] < 48) || (buffer[i] > 57)) return FALSE;
        array_length++;
    }

    local_array = (char*)malloc(array_length*sizeof(char));
    for (int i = 0; i <= array_length; i++)
    {
        local_array[i] = buffer[i];
    }
    *output = (unsigned char)atoi(local_array);
    return TRUE;
}

//Create of the adjacency matrix with check of binary input
void adjacency_matrix_builder(unsigned char matrixSize, unsigned char* pAdjacencyMatrix)
{
    for (int i = 0; i<matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            if (i < j)
            {
                unsigned char array[MAX_DIGITS] = { 0 };
                printf("[%d][%d] = ", i+1, j+1);
                if (!input_check(array, pAdjacencyMatrix + i*matrixSize + j) ||
                    !((*(pAdjacencyMatrix + i*matrixSize + j) == 1) || (*(pAdjacencyMatrix + i*matrixSize + j) == 0)))
                {
                    do {
                        printf("Wrong input. The number must consist of only digits and be 1 or 0.\n[%d][%d] = ",
                               i + 1, j + 1);
                    } while (!input_check(array, pAdjacencyMatrix + i * matrixSize + j) ||
                             !((*(pAdjacencyMatrix + i * matrixSize + j) == 1) ||
                               (*(pAdjacencyMatrix + i * matrixSize + j) == 0)));
                }
            }
            else if (i == j)
            {
                *(pAdjacencyMatrix + i*matrixSize + j) = 0;
            }
            else
                *(pAdjacencyMatrix + i*matrixSize + j) = *(pAdjacencyMatrix + j*matrixSize + i);
        }
    }

    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            printf("%5d ", *(pAdjacencyMatrix + i*matrixSize + j));
        }
        printf("\n");
    }
}

//BFS algorithm
void BFS(unsigned char* pQueue, unsigned char* pAdjacencyMatrix, unsigned char  matrixSize, unsigned char* pList)
{
    unsigned char currentNode = 0;

    add_to_queue(pQueue, 1, matrixSize);
    do
    {
        currentNode = get_from_queue(pQueue, matrixSize);
        if (is_node_visited(pList, matrixSize, currentNode)) continue;
        else add_to_queue(pList, currentNode, matrixSize);
        for(int i = 0; i < matrixSize; i++)
        {
            if (*(pAdjacencyMatrix + matrixSize * (currentNode - 1) + i) == 1)
            {
                add_to_queue(pQueue, i + 1, matrixSize);
            }
        }
    }while(!is_queue_empty(pQueue, matrixSize));
}

//check queue from right to left and find a space for new element
void add_to_queue(unsigned char* pQueue, unsigned char element, unsigned char matrixSize)
{

    for (int i = (matrixSize-1); i >= 0; i--)
    {
        if (*(pQueue + i) == 0)
        {
            *(pQueue + i ) = element;
            return;
        }
    }
    printf("No free space for element");
}

//grab element in the right of the queue, shift every other to the right by 1 and put 0 to free cell
unsigned char get_from_queue(unsigned char* pQueue, unsigned char matrixSize)
{
    unsigned char temp = *(pQueue + matrixSize-1); //valuable for containing the end of queue
    for (int i = (matrixSize - 2); i >= 0; i--) //starts with second element from the right
    {
        *(pQueue + i + 1) = *(pQueue + i);
    }
    *(pQueue) = 0; //set to 0 the leftest element in queue
    return temp;
}

//check if queue has unvisited nodes
unsigned char is_queue_empty(unsigned char* pQueue, unsigned char matrixSize)
{
    if (*(pQueue + (matrixSize-1)) == 0) return TRUE;
    else return FALSE;
}

//check if node was already visited
unsigned char is_node_visited(unsigned char* pList, unsigned char matrixSize, unsigned char node)
{
    for (int i = 0; i < matrixSize; i++)
    {
        if (*(pList + i) == node) return TRUE;
    }
    return FALSE;
}