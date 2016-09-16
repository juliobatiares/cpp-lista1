#include <iostream>
#include <stdlib.h>
using namespace std;

// Exercicio 1
float mediaAritm(float a, float b, float c);
float mediaHarm(float a, float b, float c);
// Exercicio 2
float salVendedor(float salFixo, float totalVendas, float percentual);
// Exercicio 3
float salAumento(float salario);
// Exercicio 4
float racaoGatos(float racaoGato1, float racaoGato2, float racaoTotal);
// Exercicio 5
float alturaDegraus(float altDegrau, float altDesejada);
// Exercicio 6
char* parOuImpar(char* nome1, int palpite1, int numero1,char* nome2, int palpite2, int numero2);
// Exercicio 7
float mediaCOC(float av1, float av2);
// Exercicio 8
void classificaoOMS(int idade);

int main()
{
    int execicioSelec;
    char continuar;
    

    do
    {
        system("cls");
        cout << "OLA! \nSELECIONE O EXERCICIO DESEJADO:" << endl;
        cout << endl;
        cout << "1 - Media Aritmetica e Harmonica" << endl;
        cout << "2 - Percentual de Vendas do Vendedor" << endl;
        cout << "3 - Aumento Salarial" << endl;
        cout << "4 - Racao para Gatos" << endl;
        cout << "5 - Altura desejada em degraus" << endl;
        cout << "6 - Par ou Impar" << endl;
        cout << "7 - Notas Faculdades COC" << endl;
        cout << "8 - Organizacao Mundial da Saude" << endl;
        cout << "9 - Seguro de carros" << endl;
        cout << "-----------------------------------" << endl;
        cout << "0 - Sobre o Aluno" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Numero da questao: ";
        cin >> execicioSelec;
        
        switch(execicioSelec)
        {
//float mediaAritm(float a, float b, float c);
//float mediaHarm(float a, float b, float c);            
			case 0:
				system("cls");
				cout << "JULIO CESAR SOARES BATISTA" << endl;
				cout << "Matricula: 201603261885" << endl;
        		cout << "...:::::ESTACIO UNISEB:::::..." << endl;
        		cout << "Ciencia da Computacao - Segundo Semestre" << endl;
        		cout << "Professor: Jose Camacho" << endl;
        	break;
	
			case 1:
                system("cls");
                float a,b,c;
                cout << "..::EXERCICIO 1::.." << endl;
                cout << "1 - Media Aritmetica e Harmonica" << endl;
                cout << "Valor A: ";
                cin >> a;
                cout << "Valor B: ";
                cin >> b;
                cout << "Valor C: ";
                cin >> c;
                cout << "Media Aritmetica: " << mediaAritm(a,b,c) << endl;
                cout << "Media Harmonica: " << mediaHarm(a,b,c) << endl;
            break;
//float salVendedor(float salFixo, float totalVendas, float percentual);
            case 2:
                system("cls");
                float codVendedor,salFixo,totalVendas, percentualGanhos;
                cout << "..::EXERCICIO 2::.." << endl;
                cout << "Numero do vendedor: ";
                cin >> codVendedor;
                cout << "Salario Fixo R$: ";
                cin >> salFixo;
                cout << "Total de Vendas: ";
                cin >> totalVendas;
                cout << "Percentual de Ganhos: ";
                cin >> percentualGanhos;
                cout << "Vendedor codigo " << codVendedor << ", seu salario total e de R$ " << salVendedor(salFixo,totalVendas, percentualGanhos) << endl;
            break;
//float salAumeto(float salario);
            case 3:
                system("cls");
                float salario;
                cout << "..::EXERCICIO 3::.." << endl;
                cout << "Informe o salario: R$ ";
                cin >> salario;
                cout << "Salario com aumento: " << salAumento(salario) << endl;
            break;
//float racaoGatos(float racaoGato1, float racaoGato2, float racaoTotal);
            case 4:
                system("cls");
                float racaoGato1, racaoGato2, racaoTotal;
                cout << "..::EXERCICIO 4::.." << endl;
                cout << "Informe a quantidade do saco de racao (kg): ";
                cin >> racaoTotal;
                cout << "Racao para o Gato 1 (g): ";
                cin >> racaoGato1;
                cout << "Racao para o Gato 2 (g): ";
                cin >> racaoGato2;
                racaoGatos(racaoGato1, racaoGato2, racaoTotal);
            break;
//float alturaDegraus(float altDegrau, float altDesejada);
            case 5:
                system("cls");
                float altDegrau, altDesejada;
                cout << "..::EXERCICIO 5::.." << endl;
                cout << "Digite a altura de cada degrau: ";
                cin >> altDegrau;
                cout << "Altura desejada: ";
                cin >> altDesejada;
                cout << "Restam " << alturaDegraus(altDegrau,altDesejada) << " degraus." << endl;
            break;
//char* parOuImpar(char* nome1, int palpite1, int numero1,char* nome2, int palpite2, int numero2);
            case 6:
                system("cls");
                char nome1[20], nome2[20];
                int palpite1,palpite2,numero1,numero2;
                cout << "..::EXERCICIO 6::.." << endl;
                cout << "Nome do Jogador 1: ";
                cin >> nome1;
                cout << "0 - Par" << endl;
                cout << "1 - Impar" << endl;
                cin >> palpite1;
                if(palpite1 == 0)
                {
                    palpite2 = 1;
                }
                else if(palpite1 == 1)
                {
                    palpite2 = 0;
                }
                cout << "Digite um numero: ";
                cin >> numero1;
                cout << "Nome do jogador 2: ";
                cin >> nome2;
                cout << "Digite outro numero: ";
                cin >> numero2;
                cout << "Resultado: " << parOuImpar(nome1,palpite1,numero1,nome2,palpite2,numero2) << endl;
            break;
//float mediaCOC(float av1, float av2);
            case 7:
                system("cls");
                int av1,av2, av3;
                cout << "..::EXERCICIO 7::.." << endl;
                cout << "Digite a nota da AV1: ";
                cin >> av1;
                cout << "Digite a nota da AV2: ";
                cin >> av2;
                if(mediaCOC(av1,av2) >= 6)
                {
                    cout << "Parabens! \nVoce foi APROVADO com a media " << mediaCOC(av1,av2) << endl;
                }
                else
                {
                    cout << "Digite o valor da AV3: ";
                    cin >> av3;
                    if (av3 >= 6)
                    {
                        cout << "Parabens \nVoce foi APROVADO!" << endl;
                    } else
                    cout << "Voce foi REPROVADO!" << endl;
                }
            break;
//void classificaoOMS(int idade);
            case 8:
                system("cls");
                int idade;
                cout << "..::EXERCICIO 8::.." << endl;
                cout << "Sua idade: ";
                cin >> idade;
                classificaoOMS(idade);
                cout << endl;
            break;

            case 9:
				system("cls");
				float preco, taxa1, taxa2, seguro;
				int tipo, regiao;
				cout << "--> Preco do Carro: R$ ";
				cin >> preco;
				cout << endl;
				cout << "--> Tipo de carro" << endl;
				cout << "[1] Pequeno." << endl;
				cout << "[2] Medio." << endl;
				cout << "[3] Grande." << endl;
				cin >> tipo;
				// Taxa 1
				switch(tipo) {
					case 1:
						taxa1 = 0.08;
					break;
					
					case 2:
						taxa1 = 0.12;
					break;
						
					case 3:
						taxa1 = 0.10;
					break;
				}
				cout << endl;
				cout << "--> Regiao:" << endl;
				cout << "[1] Norte e Nordeste." << endl;
				cout << "[2] Sul e Centro-Oeste." << endl;
				cout << "[3] Sudeste (Exceto SP e RJ)." << endl;
				cout << "[4] Sao Paulo." << endl;
				cout << "[5] Rio de Janeiro." << endl;
				cin >> regiao;
				// Taxa 2
				switch(regiao) {
					case 1:
						taxa2 = 0.03;
					break;
					
					case 2:
						taxa2 = 0.05;
					break;
						
					case 3:
						taxa2 = 0.08;
					break;
					
					case 4:
						taxa2 = 0.10;
					break;
					
					case 5:
						taxa2 = 0.15;
					break;
				}
				
				// Soma das Taxas mais Valor do Veiculo
				seguro = ((taxa1+taxa2)*preco);
				cout << "Seguro do carro " << seguro << endl;
				
				// Valor da franquia
				if(seguro <= 300) {
					cout << "Valor franquia R$400.00" << endl;
				} else if(seguro > 300 && (taxa1+taxa2+preco) <= 500) {
					cout << "Valor franquia R$600.00" << endl;
				} else if(seguro >= 500) {
					cout << "Valor franquia R$800.00" << endl;
				}
			
             break;
        }
        cout << "-------------------------------------------------" << endl << endl;;
        cout << "> Deseja continuar ? [s/n] ";
        cin >> continuar;
    }
    while(continuar == 's');
}

// Exercicio 1
float mediaAritm(float a, float b, float c)
{
    return (a+b+c)/3;
}

float mediaHarm(float a, float b, float c)
{
    return 3/((1/a)+(1/b)+(1/c));
}

// Exercicio 2
float salVendedor(float salFixo, float totalVendas, float percentual)
{
    return salFixo + (totalVendas * (percentual/100));
}

// Exercicio 3
float salAumento(float salario)
{
    return (salario*1.25);
}

// Exercicio 4
float racaoGatos(float racaoGato1, float racaoGato2, float racaoTotal)
{
    for(int i = 1; i <= 5; i++)
    {
        racaoTotal -= ((racaoGato1/1000)+(racaoGato2/1000));
        cout << i <<" dia " << racaoTotal << endl;
    }
}

// Exercicio 5
float alturaDegraus(float altDegrau, float altDesejada)
{
    return altDesejada/altDegrau;
}

// Exercicio 6
char* parOuImpar(char* nome1, int palpite1, int numero1,char* nome2, int palpite2, int numero2)
{
    if( ((numero1+numero2)%2) == 0)
    {
        return nome1;
    }
    else
    {
        return nome2;
    }
}

// Exercicio 7
float mediaCOC(float av1, float av2)
{
    return ((av1+av2)/2);
}

// Exercicio 8
void classificaoOMS(int idade)
{
    if(idade < 12)
    {
        cout << "Faixa (A) Crianca";
    }
    else if(idade >= 13 && idade <= 18 )
    {
        cout << "Faixa (B) Adolescente";
    }
    else if(idade >= 19 && idade <= 59)
    {
        cout << "Faixa (C) Adulto";
    }
    else if(idade >= 60)
    {
        cout << "Faixa (D) Terceira idade";
    }
} 
