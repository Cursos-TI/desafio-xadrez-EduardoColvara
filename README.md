# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio de Xadrez - MateCheck

Bem-vindo ao desafio de Xadrez da MateCheck! Este projeto tem como objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.

## Níveis do Desafio

### 🏅 Nível Novato

# ♟️ Movimentando as Peças do Xadrez

## 💡 Descrição

Este programa em **C** simula a movimentação de três peças do xadrez: **Torre**, **Bispo** e **Rainha**.  
O objetivo é praticar o uso das **estruturas de repetição** `for`, `while` e `do-while`, representando o movimento característico de cada peça no tabuleiro.

O programa **não executa o jogo completo de xadrez**, mas apenas demonstra os **movimentos básicos** de cada peça por meio de repetições e mensagens no terminal.

---

## 🧱 Peças e Estruturas Usadas

| Peça   | Direção simulada                 | Estrutura utilizada |
|--------|----------------------------------|---------------------|
| Torre  | 5 casas para a direita           | `for`               |
| Bispo  | 5 casas na diagonal (cima-direita) | `while`             |
| Rainha | 8 casas para a esquerda          | `do-while`          |

---

## ⚙️ Como Compilar

Use o compilador `gcc` para compilar o código:

```bash
gcc movimentacao_xadrez.c -o movimentacao_xadrez
./movimentacao_xadrez


### 🏅 Nível Aventureiro
Agora que já conseguimos mover as peças mais simples usando loops, os desenvolvedores pediram para elaborar os loops de outra forma. Para o desafio, moveremos o cavalo, que possui sua movimentação em L. O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma deve ser for e a outra pode ser while ou do-while.

**Movimentação do Cavalo:**

Mover o cavalo em L utilizando loops aninhados.
Obs: É obrigatório o uso de loops aninhados.

### 🥇 Nível Mestre
Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por **funções recursivas**, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

**Movimentação das Peças:**

**Bispo**: 5 casas na diagonal direita para cima
**Torre**: 5 casas para a direita
**Rainha**: 8 casas para a esquerda
**Cavalo**: 1 vez em L para cima à direita
Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Equipe de Ensino - MateCheck






# ♟️ Projeto: Desafios de Xadrez em C

Este projeto reúne três desafios progressivos em linguagem C, que simulam os movimentos de peças de xadrez e desenvolvem o raciocínio lógico e o domínio de estruturas de repetição e recursividade.

---

## 🧱 Nível Novato — Cadastrando e Movendo Peças

### 🎯 Objetivo
Criar um programa em C que simule os primeiros movimentos de peças de xadrez (como Torre e Bispo), utilizando loops simples para imprimir as direções no console.

### 🧩 Requisitos
- Definir no código o número de casas a mover.  
- Utilizar loops simples (`for` ou `while`).  
- Exibir no console a direção do movimento de cada casa percorrida.  

### 🧠 Conceitos Trabalhados
- Estruturas de repetição básicas  
- Impressão de dados com `printf`  
- Organização de código e lógica sequencial  

---

## ⚔️ Nível Aventureiro — Movimentando o Cavalo

### 🎯 Objetivo
Implementar a lógica do movimento em “L” do Cavalo no tabuleiro de xadrez, utilizando loops aninhados.

### 🧩 Requisitos
- Simular o movimento do Cavalo (duas casas para baixo e uma para a esquerda).  
- Utilizar dois loops aninhados (um `for` e um `while` ou `do-while`).  
- Separar visualmente os movimentos das demais peças com uma linha em branco.  

### 🧠 Conceitos Trabalhados
- Loops aninhados  
- Controle de fluxo com múltiplas estruturas de repetição  
- Impressão ordenada de saídas no console  

---

## 👑 Nível Mestre — Criando Movimentos Complexos

### 🎯 Objetivo
Aprimorar o programa de xadrez utilizando recursividade e loops complexos para simular os movimentos das peças: Torre, Bispo, Rainha e Cavalo.

### 🧩 Requisitos
- **Recursividade:**  
  - Implementar funções recursivas para Torre, Bispo e Rainha.  
- **Loops Complexos:**  
  - Implementar a movimentação do Cavalo com loops aninhados e múltiplas condições.  
  - Utilizar `continue` e `break` para controle preciso do fluxo.  
- Separar as saídas de cada peça com linhas em branco e imprimir as direções conforme o movimento.  

### 🧠 Conceitos Trabalhados
- Recursividade e chamadas de função  
- Estruturas de repetição complexas  
- Controle avançado de fluxo (`continue` e `break`)  
- Modularização e clareza de código  

---

## 🏁 Conclusão
O projeto “Desafios de Xadrez em C” guia o estudante por uma jornada de aprendizado prático e progressivo em lógica de programação.  
Cada nível amplia o domínio de conceitos fundamentais:

- **Novato:** Loops e lógica sequencial  
- **Aventureiro:** Loops aninhados e controle de fluxo  
- **Mestre:** Recursividade e estruturas complexas  

Ao final, o aluno desenvolve um sólido entendimento das bases de programação estruturada e das técnicas essenciais para resolver problemas lógicos em C.
Obrigado por essa experiência! Att, Eduardo Colvara. 