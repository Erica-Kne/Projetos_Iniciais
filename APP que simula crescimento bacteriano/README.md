Código criado a partir do enunciado de um trabalho da faculdade.

Introdução:
Uma técnica fundamental em microbiologia é o cultivo de bactérias em placas de 
Petri, recipientes circulares preenchidos com um meio de cultura rico em nutrientes. Quando as 
bactérias são introduzidas na placa, elas se multiplicam, formando colônias visíveis. O crescimento 
das bactérias depende de vários fatores, como a qualidade dos nutrientes, a temperatura ideal, a 
umidade, e a presença de oxigênio. Condições adversas, como luz ultravioleta ou mudanças 
bruscas de temperatura, podem inibir o crescimento. Simulações como esta ajudam a 
compreender como diferentes condições afetam o crescimento bacteriano e ilustram os 
processos que ocorrem em experimentos reais. Por meio desse exercício, você terá uma visão 
simplificada de como colônias bacterianas se desenvolvem em um ambiente controlado e como 
diversos fatores podem influenciar esse crescimento.

Objetivo: 
O objetivo é exercitar os conceitos como entrada e saída de dados, expressões matemáticas, comandos de seleção (if-else) e comandos de 
repetição (while, for). O desenvolvimento de uma simulação simples que reproduz o crescimento 
bacteriano em uma placa de Petri, incorporando elementos de aleatoriedade e condições 
ambientais.

Descrição:
O programa simula o crescimento de uma população de bactérias em uma placa de Petri ao longo de um período de tempo definido pelo usuário. O programa deve 
permitir ao usuário configurar a taxa de crescimento, o tempo total de observação (em ciclos) e implementar condições ambientais que podem afetar o crescimento
bacteriano.

1. Menu Inicial: o programa começa exibindo um menu com as seguintes opções:
1 - Nova Simulação
2 - Sair do Programa
O usuário deve escolher a opção desejada. A opção 1 inicia uma nova simulação, enquanto a 
opção 2 encerra o programa.
2. Entrada de Dados: se o usuário escolher a opção 1, o programa solicita as seguintes 
informações: 
o População inicial de bactérias (inteiro positivo).
o Taxa de crescimento (percentual inteiro que indica o aumento da população em cada ciclo).
o Número de ciclos (inteiro que representa quantos ciclos de crescimento serão simulados).
3. Simulação do Crescimento: A cada ciclo, o programa calcula a nova população usando a 
fórmula: 
 nova população = população atual + ( população atual * taxa de crescimento)/100

Condições Ambientais: após calcular a nova população em cada ciclo, o programa verifica se 
uma condição ambiental adversa ou favorável ocorre. A condição é determinada aleatoriamente 
e aplicada com base nas seguintes probabilidades e impactos:

condicão ambiental / probaliblidade (%) / impacto na população (%)
alta temperatura = (20),(-30)
falta de nutrientes = (15),(-25)
excesso de umidade = (10), (20)
radiação ultravioleta = (5),(-50)
condição favorável = (10), (+20)

O programa sorteia um número aleatório em cada ciclo para determinar se uma dessas condições 
ocorre. Se nenhuma condição adversa ou favorável for sorteada, a população cresce apenas de 
acordo com a taxa de crescimento fornecida pelo usuário.
5. Loop de Simulação: o loop de simulação continua até atingir o número total de ciclos definidos 
pelo usuário.
6. Exibição de Resultados: o programa exibe a população atual ao final de cada ciclo e também 
notifica se uma condição ambiental afetou a população nesse ciclo.
7. Validação de dados: o programa deve impedir que a população fique negativa. Se a população 
atingir zero, a simulação termina antecipadamente. Neste caso, é mostrada uma mensagem para 
o usuário dizendo que a população morreu e que a simulação não pôde continuar


