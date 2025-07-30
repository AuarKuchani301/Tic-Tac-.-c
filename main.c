#include <stdio.h>

char matrix[3][3];

char check_wer_gewonnen();
void lerre_gefuellte_matrix();
void player1_schritt();
void player2_schritt();
void print_matrix();

int main()
{

  char platz_in_matrix  = ' ';

  printf("Das ist ein Tic Tac Toe Spiel für Zwei Spielern.\n");
  lerre_gefuellte_matrix();

  do {
    print_matrix();
    player1_schritt();
    platz_in_matrix  = check_wer_gewonnen();
    if(platz_in_matrix  != ' ')
        break;
    print_matrix();
    player2_schritt();
    platz_in_matrix  = check_wer_gewonnen();
  } while(platz_in_matrix  == platz_in_matrix);

  if(platz_in_matrix == 'X')
    printf("Spieler-1 hat gewonnen!\n");
  else if (platz_in_matrix == 'O')
  printf("Spieler-2 hat gewonnen\n");
  else
        printf("Keiner hat gewonnen!\n");


  print_matrix();

  return 0;
}

void lerre_gefuellte_matrix()
{
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++)
    matrix[i][j] = ' ';
}

void player1_schritt()
{
  int x, y;
  printf("Spieler-1 ,gib X,Y koordinaten für deinen Schritt ein: ");
  scanf("%d %d", &x, &y);

  x--; y--;
  if(matrix[x][y] != ' ')
    {
    printf("Falscher Schritt , versuche es nochmal.\n");
    player1_schritt();
    }
  else matrix[x][y] = 'X';
}

 void player2_schritt()
{
  int x, y;
  printf("Spieler-2 ,gib X,Y koordinaten für deinen Schritt ein: ");
  scanf("%d %d", &x, &y);

  x--; y--;
  if(matrix[x][y] != ' ')
    {
    printf("Falscher Schritt , versuche es nochmal.\n");
    player2_schritt();
    }
  else matrix[x][y] = 'O';
}

void print_matrix()
{
  int k;

  for(k=0; k<3; k++) {
    printf(" %c | %c | %c ",matrix[k][0],matrix[k][1], matrix [k][2]);
        if(k!=2)
        printf("\n---|---|---\n");
  }
  printf("\n");
}

char check_wer_gewonnen()
{
  int i;

  for(i=0; i<3; i++)  /* check Zeilen */
    if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
        return matrix[i][0];

  for(i=0; i<3; i++)  /* check Spalten */
    if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
        return matrix[0][i];

    /* check Diagonals */
  if(matrix[0][0]==matrix[1][1] &&matrix[1][1]==matrix[2][2])
       return matrix[0][0];

  if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}

