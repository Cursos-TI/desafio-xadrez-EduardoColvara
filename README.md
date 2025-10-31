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
