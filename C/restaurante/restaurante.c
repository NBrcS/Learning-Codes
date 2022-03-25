#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void menu(){
  printf("---------------------------------\n");
  printf("         MENU PRINCIPAL          \n");
  printf("---------------------------------\n");
  printf("\n");
  printf("[1] - Cardapio\n");
  printf("[2] - Promocoes\n");
  printf("[3] - Total a pagar\n");
  printf("[0] - Sair\n");
  printf("\n");
  printf("Faca sua escolha, por favor: ");
}

void cardapio(){
  printf("----------------------------\n");
  printf("         CARDAPIO           \n");
  printf("----------------------------\n");
  printf("\n");
  printf("[1] - X-tudo = R$10.00\n");
  printf("[2] - X-salada = R$6.00\n");
  printf("[3] - X-frango = R$8.00\n");
  printf("[4] - Pastel = R$4.00\n");
  printf("[5] - Agua 500ml = R$2.00\n");
  printf("[6] - Refrigerante 350ml = R$3.50\n");
  printf("[0] - Sair\n");
  printf("Escolha: ");
}

void fsair(){
  int i;
    for (i = 3; i >= 0; i--){
      printf("Saindo...\n");
      printf("Timer: %d\n", i);
        sleep(1);
      system("clear");
    }
  system("clear");
}

void tratamentoDeErro(){
  system("clear");
  printf("Digite uma opcao valida, por favor.\n\n");
}

float xtudo(){
  int quant, contDesconto;
  float desconto, preco, total = 0;
    printf("Digite a quantidade, por favor: ");
      scanf("%d", &quant);
          if(quant >= 4){
            printf("Devido a promocao, a cada 4 x-tudo, um saira de graca.\n");
              contDesconto = (quant / 4);
              desconto = contDesconto * 10.00;
              preco = (quant * 10.00) - desconto;
              total += preco;
            printf("Logo, sua escolha totalizou um valor de R$%.2f.\n", preco);
          }
          else if(quant > 0 && quant < 4){
              preco = quant * 10.00;
              total += preco;
            printf("Sua escolha totalizou um valor de R$%.2f.\n", preco);
          }
          else if(quant <= 0){
            system("clear");
            printf("Digite uma opcao valida, por favor.\n");
          }
  return total;
}
float xsalada(){
  int quant;
  float preco, total = 0;
    printf("Digite a quantidade, por favor: ");
      scanf("%d", &quant);
         preco = quant * 6.00;
           total += preco;
     printf("Sua escolha totalizou um valor de R$%.2f.\n", preco);
  return total;
}

float xfrango(){
  int quant;
  float preco, total;
  printf("Digite a quantidade, por favor: ");
    scanf("%d", &quant);
      preco = quant * 8.00;
      total += preco;
  printf("Sua escolha totalizou um valor de R$%.2f.\n", preco);
  return total;
}

float pastel(){
  int quant;
  float preco, total;
    printf("Digite a quantidade, por favor: ");
      scanf("%d", &quant);
       preco = quant * 4.00;
        total += preco;
    printf("Sua escolha totalizou um valor de R$%.2f.\n", preco);
  return total;
}

float agua(){
  int quant;
  float preco, total;
    printf("Digite a quantidade, por favor: ");
      scanf("%d", &quant);
        preco = quant * 2.00;
        total += preco;
      printf("Sua escolha totalizou um valor de R$%.2f.\n", preco);
  return total;
}

float refri(){
  int quant;
  float preco, total;
    printf("Digite a quantidade, por favor: ");
      scanf("%d", &quant);
        preco = quant * 3.50;
        total += preco;
    printf("Sua escolha totalizou um valor de R$%.2f.\n", preco);
  return total;
}

void promocao(){
  int i;
    for (i = 4; i >= 0; i-- ){
    printf("---------------------------------------------------------------\n");
    printf("                            PROMOCOES                          \n");
    printf("---------------------------------------------------------------\n");
    printf("\n");
    printf("[1]--------- A cada 4 x-tudo, um saira de graca.\n");
    printf("[0]--------- para compras acima de R$100.00, desconto de 10%%. \n");
    printf("\n");
    printf("Timer: %d\n", i);
    sleep(1);
    system("clear");
    }
  system("clear");
}

int totalApagar(float total){
  int opcao, sair, i;
  float troco, cedula;
    system("clear");
      if(total >=100.00){
          total = total * 0.9;
        printf("Sua compra ultrapassou o valor de R$ 100.00, logo, voce recebeu um desconto de 10%%.\n");
      }
    printf("Seu total deu R$%.2f, deseja pagar agora?\n[1] Sim, pagar agora\n[0] Ainda não, voltar as escolhas\n", total);
    scanf("%d", &opcao);
      switch(opcao){
        case 1:
        system("clear");
        printf("Digite a cédula a ser utilizada, por favor: ");
          scanf("%f", &cedula);
            troco = cedula - total;
              if(troco == 0){
                printf("\nVoce pagou o valor exato, muito obrigado por optar pelos nossos servicos!\n");
                sair =  0;
              }
              else if(troco > 0){
                printf("Aqui esta o seu troco, sao R$%.2f, agradecemos pela preferencia!\n", troco);
                sair = 0;
              }
              else if(troco < 0){
                printf("Com licenca, ainda não completou o valor inteiro a ser pago...\n");
                sair = 1;
              }

          printf("\n");
          break;
        case 0:
          system("clear");
            for (i = 3; i >= 0; i--){
              printf("Voltando...\n");
              printf("Timer: %d\n", i);
                sleep(1);
              system("clear");
            }
          system("clear");
          sair = 1;
          break;
      default:
        tratamentoDeErro();
        break;
      }
return sair;
}


int programa(){
  int opcao, sair = 1;
  float total = 0;
  system ("clear");
    do{
        menu();
        scanf("%d", &opcao);
      system ("clear");
          switch(opcao){
            case 1:
              cardapio();
                scanf("%d", &opcao);
              system ("clear");
                  do{
                    //cardapio
                    switch(opcao){
                    case 1:
                      total += xtudo();
                      sair = 0;
                      break;
                    case 2:
                      total += xsalada();
                      sair = 0;
                      break;
                    case 3:
                      total += xfrango();
                      sair = 0;
                      break;
                    case 4:
                      total += pastel();
                      sair = 0;
                      break;
                    case 5:
                      total += agua();
                      sair = 0;
                      break;
                    case 6:
                      total += refri();
                      sair = 0;
                      break;
                    case 0:
                      fsair();
                      sair = 0;
                      break;
                    default:
                      tratamentoDeErro();
                      sair = 0;
                      break;
                    }
                  }while(sair == 1);
                break;
            case 2:
              //promocoes
              promocao();
              break;
            case 3:
            //total a pagar
                if (totalApagar(total) == 0){
                  return 0;
                }
                else if(totalApagar(total) == 1){
                }
              break;
            case 0:
              //sair
              fsair();
              return 0;
            default:
            //opcao invalida
              tratamentoDeErro();
              break;
          }
    }while(1);

}

int main (void){
  if(programa() == 0) return 0;
}

