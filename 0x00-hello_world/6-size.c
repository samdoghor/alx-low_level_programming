/*
******************************************************************************
*                                                                            *
*                                                 _____  ______    ____  ___ *
*    6-size.c                                    /  _  \ |    |    \   \/  / *
*                                               /  /_\  \|    |     \     /  *
*    By: Samuel Doghor <samdoghor@gmail.com>   /    |    \    |___  /     \  *
*                                              \____|__  /_______ \/___/\  \ *
*    Created: 2023-07-18 02:55:51 by SamDoghor         \/        \/      \_/ *
*    Updated: 2023-07-19 02:55:51 by SamDoghor                               *
*                                                                            *
******************************************************************************
*/

#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
