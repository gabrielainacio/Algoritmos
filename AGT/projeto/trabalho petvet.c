//PetVet
//Alunos: Camile, Gabriela, Guilherme Augusto, João Victor, Livia, Maria Isabel e Mariana

#include <stdio.h>
#include <string.h>

void limparTerminal(){
    printf("\033[H\033[J");
}

void funcaoEnter(){
    printf("\nPressione enter para continuar\n");
    getchar(); 
    getchar(); 
}

float calculaRacao(char tamPacote, int qtdPacote, float valorRacao, char descricaoFinal[]){
    float res = 0;
    char str[10];
    char tamPct[2] = {'0', '\0'}; //converte tamPacote de char para string
    tamPct[0] = tamPacote;

    if(qtdPacote > 1){
        res = (valorRacao * qtdPacote) - ((valorRacao * qtdPacote) * 0.10);
        
        printf(" O total, com desconto de 10%%, eh de R$%.2f\n", res);

        //adiciona na nota fiscal
        sprintf(str, "%i", qtdPacote); //converte qtdPacote de int para string

        strcat(descricaoFinal, str);
        strcat(descricaoFinal, "x Racao Tam. ");
        strcat(descricaoFinal, tamPct);
        strcat(descricaoFinal, "...R$");

        sprintf(str, "%.2f", valorRacao); //converte valorRacao de float para string

        strcat(descricaoFinal, str);
        strcat(descricaoFinal,"\n");
        strcat(descricaoFinal, "10% desconto...R$");

        sprintf(str, "%.2f", res); //converte res de float para string

        strcat(descricaoFinal, str);
        strcat(descricaoFinal,"\n");

        return res;
    } else{
        printf(" O total eh de R$%.2f\n", valorRacao);

        //adiciona na nota fiscal
        strcat(descricaoFinal, "Racao Tam. ");
        strcat(descricaoFinal, tamPct);
        strcat(descricaoFinal, "...R$");

        sprintf(str, "%.2f", valorRacao); //converte valorRacao de float para string

        strcat(descricaoFinal, str);
        strcat(descricaoFinal,"\n");

        return valorRacao;
    }
}

int main(){
    int opcao = 0, tipoAnimal, tamPacote, qtdPacote, i;
    float soma = 0, valorRacao;
    char nome[200], telefone[20], nomeAnimal[200], medicamento[200], dataServico[12];
    char descricaoFinal[500] = {"-------- Servicos -------\n"};
    int encomenda = 0; //true 1 | false 0

    limparTerminal();

    printf("SISTEMA DE REGISTROS - CLINICA PETVET\n");
    printf("Insira o nome do cliente: ");
    scanf("%[^\n]s", nome);

    limparTerminal();

    while(opcao != 5){
        while(opcao < 1 || opcao > 5){
            printf("+---------------------------------+\n");
            printf("|              MENU               |\n");
            printf("+---------------------------------+\n");
            printf("|1) Vacina      3) Venda de racao |\n");
            printf("|2) Castracao   4) Medicamentos   |\n");
            printf("|5) Finalizar atendimento         |\n");
            printf("+---------------------------------+\n");
            if(soma > 0){
                printf("Total: R$%.2f\n", soma);
            }
            printf("Insira o numero da opcao desejada: ");
            scanf("%i", &opcao);
            printf("\n");
        }

        limparTerminal();

        switch(opcao){
        case 1: 
            opcao = 0;
            printf("+---------------- Vacinacao ------------------+\n");
            printf("|A vacina inclui a consulta com o veterinario.|\n");
            printf("|O valor total eh de R$190,00                 |\n");
            printf("+---------------------------------------------+\n");

            soma += 190.00;

            //adiciona na nota fiscal
            strcat(descricaoFinal,"Vacinacao...R$190,00\n");

            funcaoEnter();
            limparTerminal();

        break;

        case 2:
            opcao = 0;
            printf("+--------------------------------+\n");
            printf("|           Castracao            |\n");
            printf("+--------------------------------+\n");
            printf("|Selecione o tipo do seu animal: |\n");
            printf("| 1) Felino      2) Canino       |\n");
            printf("+--------------------------------+\n");
            printf("Insira o numero da opcao desejada: ");
            scanf("%i", &tipoAnimal); //Seleciona felino ou canino
            printf("Insira o nome do animal: ");
            scanf("\n%[^\n]s", nomeAnimal); //Recebe o nome do animal
            printf("Insira a data do servico: ");
            scanf("\n%[^\n]s", dataServico); //Recebe a data do serviço
            printf("\n");

            limparTerminal();

            switch(tipoAnimal){ //Verifica o tipo do animal
            //Felino
            case 1:
                printf("+------------------------------------------------+\n");
                printf("|                   Castracao                    |\n");
                printf("+------------------------------------------------+\n");
                printf("|A castracao inclui a consulta com o veterinario.|\n");
                printf("|Para felinos, o total eh de R$220,00            |\n");
                printf("+------------------------------------------------+\n");

                soma = soma + 220; //Adiciona o valor do serviço ao total

                //adiciona na nota fiscal
                strcat(descricaoFinal, "Castracao Felino...R$220\n");
                strcat(descricaoFinal, "Nome Felino: ");
                strcat(descricaoFinal, nomeAnimal);
                strcat(descricaoFinal, "\n");
                strcat(descricaoFinal, "Data: ");
                strcat(descricaoFinal, dataServico);
                strcat(descricaoFinal, "\n");
            break;
    
            //Canino
            case 2:
                printf("+------------------------------------------------+\n");
                printf("|                   Castracao                    |\n");
                printf("+------------------------------------------------+\n");
                printf("|A castracao inclui a consulta com o veterinario.|\n");
                printf("|Para caninos, o total eh de R$280,00            |\n");
                printf("+------------------------------------------------+\n");

                soma = soma + 280; //Adiciona o valor do serviço ao total

                //adiciona na nota fiscal
                strcat(descricaoFinal, "Castracao Felino...R$280\n");
                strcat(descricaoFinal, "Nome Felino: ");
                strcat(descricaoFinal, nomeAnimal);
                strcat(descricaoFinal, "\n");
                strcat(descricaoFinal, "Data: ");
                strcat(descricaoFinal, dataServico);
                strcat(descricaoFinal, "\n");
            break;
            }

            funcaoEnter();
            limparTerminal();
        break;

        case 3:
            opcao = 0;
            printf("+--------------------------------+\n");
            printf("|         Venda de Racao         |\n");
            printf("+--------------------------------+\n");
            printf("|Selecione o tamanho do pacote:  |\n");
            printf("|1) P       2) M       3) G      |\n");
            printf("+--------------------------------+\n");
            printf("Insira o numero da opcao desejada: ");
            scanf("%i", &tamPacote);
            printf("Quantos pacotes de racao deseja? ");
            scanf("%i", &qtdPacote);
            
            limparTerminal();
            
            switch(tamPacote){
            //Tamanho P
            case 1: 
                printf("+-------------------------------------------+\n");
                printf("|              Venda de Racao               |\n");
                printf("+-------------------------------------------+\n");
                printf(" Voce selecionou %i de tamanho P\n", qtdPacote);
                
                soma += calculaRacao('P', qtdPacote, 30, descricaoFinal);
                funcaoEnter();
                limparTerminal();
                break;
            //Tamanho M
            case 2: 
                printf("+-------------------------------------------+\n");
                printf("|              Venda de Racao               |\n");
                printf("+-------------------------------------------+\n");
                printf("Voce selecionou %i de tamanho M\n", qtdPacote);
                
                soma += calculaRacao('M', qtdPacote, 70, descricaoFinal);
                funcaoEnter();
                limparTerminal();
                break;
        
            //Tamanho G
            case 3: 
                printf("+-------------------------------------------+\n");
                printf("|              Venda de Racao               |\n");
                printf("+-------------------------------------------+\n");
                printf("Voce selecionou %i de tamanho G\n", qtdPacote);
                
                soma += calculaRacao('G',qtdPacote, 120, descricaoFinal);
                funcaoEnter();
                limparTerminal();
                break;
            }
        break;

        case 4:
		    opcao = 0;
        	printf("+-------------------------------------------+\n");
            printf("|                Medicamentos               |\n");
            printf("+-------------------------------------------+\n");
        	printf("Informe o nome do medicamento: ");
        	scanf("\n%[^\n]s", medicamento); //Recebe o nome do medicamento
        	printf("Informe seu telefone para contato: ");
        	scanf("\n%[^\n]s", telefone); //Recebe o telefone para contato
        
        	encomenda = 1;

            //adiciona na nota fiscal
            strcat(descricaoFinal, "Medicamento: ");
            strcat(descricaoFinal, medicamento);
            strcat(descricaoFinal, "\n");
            strcat(descricaoFinal, "Contato: ");
            strcat(descricaoFinal, telefone);
            strcat(descricaoFinal, "\n");

        	limparTerminal();
        break;

        case 5:
            //nota fiscal
            if(soma != 0 || encomenda == 1){
                printf("====== NOTA FISCAL ======\n");
                printf("Cliente: %s\n", nome);
                printf("%s", descricaoFinal);
                printf("-------------------------\n");
                if(soma != 0){
                    printf("Total...........R$%.2f\n", soma);
                }
            }
            
            printf("\nObrigado e volte sempre!\n");
        break;
        }
    }
    return 0;
}