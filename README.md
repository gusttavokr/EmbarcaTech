<div align="center">
 <img width="300"
    alt="EmbarcaTech_logo"
    src=https://ifce.edu.br/noticias/ifce-integra-capacitacao-nacional-em-sistemas-embarcados/captura-de-tela-2024-07-08-141318-1.jpg/@@images/a46e3b52-3b0c-450e-afa2-353600ffb4c2.jpeg
    />
  <h1>EmbarcaTech</h1> 
  Repositório de estudos para o curso EAD - EmbarcaTech (Residência Tecnloógica em Sistemas Embarcados)
</div>

# Unidade 1 - Introdução a educação a distância
## 1. Tecnologia e sua Relação com a humanidade
A unidade 1 explora a origem da tecnologia como um todo. Desde a seleção das ferramentas naturais até a própria fabricação. O termo tecnologia surgiu na Idade Média, como um derivado das habilidades práticas, chamado **ars mechanica.**

Partindo para a atualidade, o dicionário de Houaiss define como "teoria geral e/ou estudo sistemático sobre técnicas, processos, métodos meios e instrumentos de um ou mais ofícios ou domínios da atividade humana". Resumidamente: Mostra como a tecnologia não se trata apenas de uma ferramenta, mas principalmente os processos e sistemas.

A tecnologia se divide em 3 classificações:
1. Tecnologias Materiais(Duras): Engenharias, medicina, criação e manuseio de instrumentos e máquinas;
2. Tecnologias Sociais(Flexíveis): Psicologia, sociologia, etc;
3. Tecnologias Conceituais: Informática, teorias de sistema, metodologias;

## 2. Ensino à distância (Em construção)

## Atividades práticas da Unidade
1) Escreva sua própria definição de tecnologia e compare-a com as definições
apresentadas neste capítulo. RS: A tecnologia nada mais é do que o estudo conceitual e sistemático do uso das ferramentas as quais surgem e acompanham a evolução da humanidade, de tal forma que agregue significamente em seu meio.

2) Faça uma lista de tecnologias que você utiliza diariamente e reflita sobre como elas moldam sua rotina e interação com o meio ambiente. RS: Tecnologias como Smartphones, que abriram fronteiras para o surgimento das redes sociais, influenciou totalmente o meio ambiente dos cidadãos, desde o surgimento da dependência de tela como um problemática que cresce exponencialmente.
 
3) WhatsApp, Spotify, Google Classroom, Github e VSCode. Todas as 5 TICs agregam diretamente em meu desempenho pessoal como profissional, seja mantendo o foco com músicas, seja com as plataformas de apoio e material de ensino.

4) Github como uma TIC positiva, atua muito bem tanto para a prática profissional ou como uma comunidade ativa na área de desenvolvimento. Por fim, para uma TIC negativa, menciono o Instagram, que como uma rede social, traz consigo grandes problemas como a autocomparação entre os usuários, ou a dependência de uso.


# Unidade 2 - Sistemas Embarcados
## 1. O que é um Sistema Embarcado?
Um sistema embarcado é um sistema de computação projetado para uma função específica.

### 1. Classificação:

- Sistemas embarcados autônomos:
- Sistemas embarcados não determinísticos:
- Sistemas embarcados orientados ao desempenho:
- Sistemas embarcados críticos para segurança: 
- Sistemas embarcados táticos
- Sistemas embacados centralizados
- Sistemas embarcados em rede
- Sistemas embarcados em tempo real
- Sistemas embarcados co eficiência enpergetica
- Sistemas embarcados portáteis
- Sistemas emvarcados distribuidos

### 2. Tipos de Aplicações:

- Propósito geral:
- Sistemas de controle:
- Processamento de sinais:
- Comunicações e Redes

Um exemplo, é quando o carro dá ré, e apita supondo a proximidade de algum objeto em hipótese de colidir.

### 3. Classificação dos Sistemas em Tempo Real
- Soft Real Time:
As tarefas são executadas em tempo específico, sem prejuízo de funcionamento grave se este tempo não for cumprido.

- Hard Real Time:
As tarefas são executadas em tempo específico para cada uma e no caso da falha de alguma tarefa, há consequências graves para o sistema.

### 4. Características dos Sistemas Embarcados
- Características específicas, por exemplo: alguns não podem parar;
- Ser o menor possível;
- Uso de microcontroladores devido o consumo restrito de mémoria, tamanho, e velocidade de processamento;
- Executa somente um programa, repetidamente;
- Sistemas Reativo de Tempo Real;
- Presença de sensores e/ou atuadores que possibilitam reagir ao ambiente.
- O Firmware do sistema embarcado não pode ser usado em outros sistemas sem que não sejam feitas mudanças.
- Hardware sob medida para que o sistema funcione perfeitamente em sua aplicação
- Interdependente do Firmware e do Hardware

### 5. Restrições
- Baixo custo;
- Interface simples;
- Dimensão reduzida;
- Segurança;
- Disponibilidade;
- Estabilidade;
- Robustez;
- Baixa potência;
- Tempo de resposta;

### 6. Restrições de Rede
- Bluetooth;
- Bluetooth Audio;
- Bluetooth Sensor;
- Bluetooth SmartTv (?);

- Baixa taxa de bits
- Alta perda de pacotes
- Prejuízo para o uso de pacotes maiores

## 2. Arquitetura de Sistemas Embarcados

Existe um Software e um Hardware em um Sistema Embarcado

**Software terá:**
1. Firmware - É um software (programa, script), gravado no microcontrolador que determina o que seu SE irá fazer.
2. Sistema Embarcado
3. Debug
4. Drivers

**Hardware terá:**
1. CPU
2. Memória
3. Interfaces
4. Circuitos Auxiliares

### 1. Componentes de um Sistema Embarcado
**Microcontrolador**\
O microcontrolador incorpora funções em um unico chip, memória de instruções ou dados, geradores de clock, etc.

***Memória Externa(Estudando)***

**Periféricos e Interfaces**\
Os **Periféricos** são componentes de um SE, que podem dar entrada e saída, acessando o microcontrolador.\
Já as **Interfaces** são quem fazem a ligação entre os periféricos e as MCU's, exemplos: Interface pra teclado, interface LCD, etc.

***Sensores(Estudando)***

***Atuadores(Estudando)***\
Drivers de motores, Drivers de Led, Emissores, etc.

### Diferença entre Microcontrolador e Microprocessador?
**Microprocessador:**\
O microprocessador trabalha no processamento de tarefas, tempo de execução e agilidade onde será implementado no Sistema Embarcado em que execute tarefas diversificadas.

**Microcontrolador:**\
Já o microcontrolador, trabalha de forma mais generalizada. É o chip que se responsabiliza em tarefas específicas, de preferência para o baixo consumo de energia com ênfase nessa tarefa em específico.

Usa-se um ou outro dependendo das necessidades do Sistema Embarcado.

### 2. Arquitetura do Hardware
Algumas das principais arquiteturas são:

**Arquitetura Harvard Risc:**\
Sua principal característica é a unidade de processamento cujo possui **um número restrito de tarefas, o que resulta em uma execução de tarefas mais rápida.** Seu microcontrolador é o RISC que possui um acesso de memória mais ágil.

**Arquitetura Von Neumann:**\
Já nessa arquitetura, sua principal característica é **a maior gama de tarefas que é capaz de executar**, como consequência, a eficiência de execução cai. Seu microcontrolador é o CISC, que possui um **acesso a memória lenta**, compacta, e que realiza esse acesso um de cada vez.

### 3. Arquitetura em Camadas
![image](https://github.com/user-attachments/assets/eeda6b74-8810-4422-9eff-537a80a001d8)\
Esse modelo é composto de 3 camadas:\
1. Camada de Hardware: Nessa camada, é incluído todos os componentes físicos do microcontrolador.\
**Qual a diferença de Flash, SRAM e DRAM?**
A SRAM (Memória Estática), é a memória que acessa dados temporários de forma rápida. Mas cara.
A DRAM (Memória Dinâmica), é a memória que consegue armazenar mais dados. Mais lenta, e mais usada.
Já a memória Flash, é usada para armazenamento permanente, que armazena até desligado.

3. Camada de Software básico: Aqui, temos o firmware, drivers, e dependendo, um sistema operacional.
4. Camada de aplicação: Já nessa, é a camada responsabilizada com a função que o SE irá executar.
