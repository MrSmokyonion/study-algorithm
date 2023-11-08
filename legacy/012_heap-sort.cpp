#include <iostream>
#define MAXIMUM_DATA_SIZE 9

int heap[MAXIMUM_DATA_SIZE] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main()
{
    //배열 구조를 맨처음에 힙 구조로 구성한다.
    for(int i = 1; i<MAXIMUM_DATA_SIZE; i++)
    {
        int c = i;  //자식 노드 인덱스값. root를 제외한 모든 노드를 차례대로 가리킴.
        do
        {
            int root = (c - 1) / 2; //c의 부모 노드 인덱스값. 이 값은 최상위 부모 노드까지 올라감.
            if(heap[root] < heap[c])
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;   //자식 노드의 부모 노드를 다시 가리킴.
        } while (c != 0);
    }

    //먼저, 앞서 구성한 힙의 root 값을 최하단으로 보낸다.
    //그 후에 크기를 1 줄이고 다시 힙 구성을 반복한다.
    //이 방식으로 끝에서부터 정렬값 쌓고, 힙구성, 쌓고, 힙구성 ... 해서 정렬함.
    for(int i = MAXIMUM_DATA_SIZE-1; i >= 0; i--)
    {
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;

        int root = 0;
        int c = 1;
        do
        {
            c = 2 * root + 1;
            //두 자식 노드 중에서 더 큰 값을 찾아서 가리키기.
            if(c < i - 1 && heap[c] < heap[c+1])
            {
                c++;
            }
            //루트보다 자식노드가 값이 더 크다면 교환
            if(c < i && heap[root] < heap[c])
            {
                temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        } while (c < i);    //정렬된 값은 제외하고 반복함.
        
    }

    //출력
    for(int i = 0; i<MAXIMUM_DATA_SIZE; i++)
    {
        printf("%d ", heap[i]);
    }

    return 0;
}