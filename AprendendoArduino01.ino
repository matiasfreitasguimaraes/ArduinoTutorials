//Oi gente, tudo bem com vocês? Primeiro, queria explicar: As barras duplas no começo de cada linha servem para comentar o codigo.

//Arduino é uma plataforma para fazer prototipos de dispositivos eletronicos. Você pode ligar a ele sensores de luz, som, e motores e lampadas nele. 
//basicamente, você pode ligar qualquer coisa num arduino.

//Um arduino por um bom preço varia de 20 a 40 reais.
//Link de um arduino com tudo para mexer nele
//https://produto.mercadolivre.com.br/MLB-762974690-arduino-uno-r3-atmega328-instrucoes-_JM#reco_item_pos=1&reco_backend=v2p-csc-i2i-ngrams&reco_backend_type=null&reco_client=vip-v2p&reco_id=f6c7ba6a-dbc7-4a8f-ad98-bf862d7a9373

//E a partir dessa placa chamada arduino, você consegue controlar esses dispositivos eletricos.
//Agora, vou apresentar a estrutura basica de um arquivo de codigos de arduino. 
//esse codigo não faz muito sentido, é mais feito para apresentar estruturas basicas do arquivo. 



//Esse pedaço no começo é onde você importa bibliotecas, cria variaveis e define algums valores fixos.
#include <Stepper.h>
//Isso acima sou eu importando uma biblioteca
byte botao = 2;
// isso é uma variavel
#define pi 3.14
//isso é um numero fixo que eu dei um nome para ele

void setup() {
//esse pedaço do codigo é geralmente usado para inicializar os dispositivos e fazer processsos que rodarão só uma vez
  pinMode(12, INPUT);
//esse é uma parte do codigo feito para inicializar a saida 12 da placa do arduino
  digitalWrite(12, HIGH);
//essa é uma parte do codigo escrevendo para a saida 12 que ela deve estar ativa.
  
}

void loop() {
//essa é a parte do codigo que se repete diversas vezes. Um loop. 

  if (1+1 == 2) {
    digitalWrite(led, LOW);
  }
  else {
    digitalWrite(led, HIGH);
  }
//essa é estrutura basica de chamada de tomada de decisões. O IF, ou em bom portugues, SE funciona assim: Se a condição apresentada for valida
//No caso, se 1+1 for igual a 2
//Então você faz a coisa dentro dos colchetes.
//O else, ou em bom portugues, SE NÃO funciona assim: Se a ou as condições anteriores não forem verdairas, ele executa o que está dentro dos colchetes do Else. 

}

//E bem, essa é a estrutura mais básica de um codigo de Arduino. Se sobrar alguma duvida, me chamem!