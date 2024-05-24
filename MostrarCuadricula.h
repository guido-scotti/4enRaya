#ifndef MOSTRARCUADRICULA_H_INCLUDED
#define MOSTRARCUADRICULA_H_INCLUDED

void mostrarMatrizCuadricula (char matrizTablero[6][7]){
        for (int i=0; i<=5; i++)
        {
            for (int x=0; x<=6; x++)
            {
                matrizTablero[i][x]= '-';
            }
        }

        matrizTablero[6][7];
        for (int i=0; i<=5; i++)
        {
            for (int x=0; x<=6; x++)
            {
                cout<< matrizTablero[i][x] << " ";
            }
            cout<<endl;
        }
}

void mostrarCuadricula()
{
    cout << "    | 1  | 2  | 3  | 4  | 5  | 6  | 7  |" << endl;
    cout << "+---+----+----+----+----+----+----+----+" << endl;
    cout << "| 1 |    |    |    |    |    |    |    |" << endl;
    cout << "|---|----|----|----|----|----|----|----|" << endl;
    cout << "| 2 |    |    |    |    |    |    |    |" << endl;
    cout << "|---|----|----|----|----|----|----|----|" << endl;
    cout << "| 3 |    |    |    |    |    |    |    |" << endl;
    cout << "|---|----|----|----|----|----|----|----|" << endl;
    cout << "| 4 |    |    |    |    |    |    |    |" << endl;
    cout << "|---|----|----|----|----|----|----|----|" << endl;
    cout << "| 5 |    |    |    |    |    |    |    |" << endl;
    cout << "|---|----|----|----|----|----|----|----|" << endl;
    cout << "| 6 |    |    |    |    |    |    |    |" << endl;
    cout << "+---+----+----+----+----+----+----+----+" << endl;
    system ("pause");
    system ("cls");
}

#endif // MOSTRARCUADRICULA_H_INCLUDED
