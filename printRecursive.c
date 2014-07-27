#include<stdio.h>

int pathlen = 0 ;

int path[1000] ;

printPathsRecur( tree, path[], pathlen)
{
	if ( tree != NULL)

	{
		path[pathlen] = tree ;
		pathlen++ ;
	}

	if( tree->left == NULL and tree->right == NULL )
	{
		printPath(path,pathlen)
	}
	else
	{
		printPathsRecur(tree->left, path, pathlen)
		printPathsRecur(tree->right, path, pathlen)
	}	

}



