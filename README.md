<h2 align="center" >
    Lift and Learning usando Arduino e Sensores de Luz (LDR) <br>
    <img alt="GitHub stars" src="https://img.shields.io/github/stars/4YouSee-Suporte/lift-and-learning-arduino-com-sensor-de-luz?style=social">
    <img alt="GitHub followers" src="https://img.shields.io/github/followers/4YouSee-Suporte?label=Follow%20me%20%3A%29&style=social">
</h2>

<h1>⚈ Sobre este Projeto'</h1>
Este repositório contém o código-fonte para uso no software arduino. Ele lê a quantidade de luz que entra nos sensores LDR e dessa forma quando a luz é maior a um valor estabelecido, ele envia um sinal ao teclado.

Logo, essa sinal é aproveitada dentro de um script python que roda em background e assim executa um conteúdo no 4yousee player.

<h1>⚈ Mais informações</h1>
Para este projeto é necessário cumprir os seguintes itens:

* Arduino Leonardo (Pode ser mini ou não): Ele vai ser o responsável por processar o código e enviar o comando ao teclado referente ao estabelecido no código. Por padrão cada sensor vai enviar um número ao teclado, Exemplo: O sensor A0 envía o número 11 quando a luz for mayor a 500 Lux.
*  Cabo Micro USB: Esse cabo vai ser conectado desde o Arduino Leonardo até o PC.
* Ciurcuito Elétrico: ... Pendente carregar gráfico com ilustração do circuito.
    * Cabos, resistências, outros periféricos eletricos.
* Base ou superficie onde ficarão os produtos: Os produtos de test são mentos de tres sabores diferentes. Mas é possível usar qualquer outro produto que consiga ficar em pé cobrindo a área de leitura do sensor de luz (LDR).
* Computador Windows com el [software arduino](https://downloads.arduino.cc/arduino-1.8.15-windows.exe) instalado.


# ⚈ Como Debugar ou Calibrar os Sensores</h1>
Uma vez o circuito esteja montado você precisa tanto debugar o projeto como calibrar os sensores. Para isso é necessário que abra o software de Arduino no seu computador e com o arduino conectado ao computador e abra o [arquivo principal do projeto](https://github.com/4YouSee-Suporte/lift-and-learning-arduino-com-sensor-de-luz/blob/main/main.ino), clique em ![image](https://user-images.githubusercontent.com/63620799/119711903-6b248900-be36-11eb-9d9c-44757629380a.png) para compilar o código e logo em ![image](https://user-images.githubusercontent.com/63620799/119712032-8db6a200-be36-11eb-82d3-3e5fbd57b984.png). A partir de aqui  o código se encontra no Arduino Leonardo e cada mudança realizada deverá ser subida ao equipamento através do processo anteriormente explicado.

Não esqueça de estabelecer a porta e a placa em Ferramentas.

Para mais detalhes ou dúvidas nesta configuração você pode assistir o video de configuração ao nível de software [Lift and Learning usando arduino leonardo com sensores LDR](https://youtu.be/n5dpdk6WEJI) ou a nivel de hardware [Set Up do Lift and Learning usando arduino leonardo com sensores LDR](https://youtu.be/96gaH0HVEG4)

