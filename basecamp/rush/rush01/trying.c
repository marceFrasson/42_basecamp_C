/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trying.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:31:49 by mfrasson          #+#    #+#             */
/*   Updated: 2020/11/28 22:32:50 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** col1up col2up col3up col4up col1down col2down col3down col4down row1left
** row2left row3left row4left row1right row2right row3right row4right
*/

int		main(int argv, int arcg[])


/*
** if more arguments exit
*/

if (argc > 16)
{
	return (1); // ????
}


/*
** array matrix 4x4
*/

int r1c1[5] = {0, 1, 2, 3, 4};
int r1c2[5] = {0, 1, 2, 3, 4};
int r1c3[5] = {0, 1, 2, 3, 4};
int r1c4[5] = {0, 1, 2, 3, 4};
int r2c1[5] = {0, 1, 2, 3, 4};
int r2c2[5] = {0, 1, 2, 3, 4};
int r2c3[5] = {0, 1, 2, 3, 4};
int r2c4[5] = {0, 1, 2, 3, 4};
int r3c1[5] = {0, 1, 2, 3, 4};
int r3c2[5] = {0, 1, 2, 3, 4};
int r3c3[5] = {0, 1, 2, 3, 4};
int r3c4[5] = {0, 1, 2, 3, 4};
int r4c1[5] = {0, 1, 2, 3, 4};
int r4c2[5] = {0, 1, 2, 3, 4};
int r4c3[5] = {0, 1, 2, 3, 4};
int r4c4[5] = {0, 1, 2, 3, 4};

int col1up = argv[1];
int col2up = argv[2];
int col3up = argv[3];
int col4up = argv[4];
int col1down = argv[5];
int col2down = argv[6];
int col3down = argv[7];
int col4down = argv[8];
int row1left = argv[9];
int row2left = argv[10];
int row3left = argv[11];
int row4left = argv[12];
int row1right = argv[13];
int row2right = argv[14];
int row3right = argv[15];
int row4right = argv[16];


/*
** matrix conditions
*/

r1c1[] != r1c2[] && r1c3[] && r1c4[] && r2c1[] && r3c1[] && r4c1[]

r1c2[] != r1c1[] && r1c3[] && r1c4[] && r2c2[] && r3c2[] && r4c2[]

r1c3[] != r1c1[] && r1c2[] && r1c4[] && r2c3[] && r3c3[] && r4c3[]

r1c4[] != r1c1[] && r1c2[] && r1c3[] && r2c4[] && r3c4[] && r4c4[]

r2c1[] != r2c2[] && r2c3[] && r2c4[] && r1c1[] && r3c1[] && r4c1[]

r2c2[] != r2c1[] && r2c3[] && r2c4[] && r1c2[] && r3c2[] && r4c2[]

r2c3[] != r2c1[] && r2c2[] && r2c4[] && r1c3[] && r3c3[] && r4c3[]

r2c4[] != r2c1[] && r2c2[] && r2c3[] && r1c4[] && r3c4[] && r4c4[]

r3c1[] != r3c2[] && r3c3[] && r3c4[] && r1c1[] && r2c1[] && r4c1[]

r3c2[] != r3c1[] && r3c3[] && r3c4[] && r1c2[] && r2c2[] && r4c2[]

r3c3[] != r3c1[] && r3c2[] && r3c4[] && r1c3[] && r2c3[] && r4c3[]

r3c4[] != r3c1[] && r3c2[] && r3c4[] && r1c4[] && r2c4[] && r4c4[]

r4c1[] != r4c2[] && r4c3[] && r4c4[] && r1c1[] && r2c1[] && r3c1[]

r4c2[] != r4c1[] && r4c3[] && r4c4[] && r1c2[] && r2c2[] && r3c2[]

r4c3[] != r4c1[] && r4c2[] && r4c4[] && r1c3[] && r2c3[] && r3c3[]

r4c4[] != r4c1[] && r4c2[] && r4c3[] && r1c4[] && r2c4[] && r3c4[]


/*
** building matrix conditions
*/


if left || right == 1
{
	rxry[4] 
}

if left || right == 2
{
	(rxry[2] && rxry2[4]) || (rxry[3] && rxry2[4])
}

if left || right == 3
{
	(rxry[1] && rxry2[2] && rxry3[4]) || (rxry[1] && rxry2[3] && rxry3[4]) || (rxry[2] && rxry2[3] && rxry3[4])
}

if left || right == 4
{
	right || left == 1
	rxry[1] && rxry2[2] && rxry3[3] && rxry4[4]
}


if (col1up == 1)
	r1c1[4];
}

if (col1up == 2)
{
	(r1c1[1] && r2c1[4]) || (r1c1[2] && r2c1[4]) || (r1c1[3] && r2c1[4])
}
