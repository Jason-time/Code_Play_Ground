#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Node{
	char *Data;
	struct _Node *Next;
}Node;

void main(){
	Node NodeA;
	Node *ptrNode;

	NodeA.Data = (char *)malloc(10);
	strcpy(NodeA.Data, "coffee");

	printf("NodeA.Data : %s\n",NodeA.Data);
	free(NodeA.Data);

	ptrNode = (Node *)malloc(sizeof(Node));
	ptrNode -> Data = (char *)malloc(10);
	strcpy(ptrNode -> Data, "coffee");
	printf("ptrNode -> Data : %s\n", ptrNode -> Data);
	free(ptrNode -> Data);
	free(ptrNode);
	
}

