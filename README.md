# 🃏 Desafio Lógica - Super Trunfo em C

Este repositório contém a evolução da implementação do jogo **Super Trunfo** em linguagem **C**, dividida em três níveis: **Novato**, **Aventureiro** e **Mestre**. Cada nível adiciona novos desafios e funcionalidades ao jogo, explorando lógica condicional, estrutura de dados e operações com números.

---

## 🧹 Nível Novato

### ✅ Objetivo
Comparar **apenas um atributo** entre duas cartas e determinar a vencedora.

### ⚙️ Lógica
- O jogador escolhe um dos 5 atributos disponíveis.
- O programa compara esse atributo nas duas cartas.
- Exibe qual carta venceu com base no valor do atributo.

### 📅 Exemplo de Entrada
```
Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
Digite o número do atributo: 1
```

### 📆 Exemplo de Saída
```
Atributo escolhido: População
Carta 1 - São Paulo: 12300000
Carta 2 - Rio de Janeiro: 6710000
Resultado: Carta 1 venceu!
```

---

## 🧷 Nível Aventureiro

### ✅ Objetivo
Permitir a escolha de **dois atributos diferentes** para serem comparados entre duas cartas.

### ⚙️ Lógica
- O jogador escolhe dois atributos diferentes.
- O programa compara cada um separadamente.
- Soma os resultados de cada atributo e exibe quem venceu.

### 📅 Exemplo de Entrada
```
Escolha o primeiro atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
Digite o número do primeiro atributo: 1

Escolha o segundo atributo para comparar:
Digite o número do segundo atributo: 2
```

### 📆 Exemplo de Saída
```
Atributo 1: População
Carta 1: 12300000 | Carta 2: 6710000 → Carta 1 venceu!
Atributo 2: Área
Carta 1: 1521.11 km² | Carta 2: 1182.30 km² → Carta 1 venceu!

Soma dos Resultados:
Carta 1: 2 pontos
Carta 2: 0 pontos
Resultado: Carta 1 é a vencedora!
```

---

## 🧙 Nível Mestre

### ✅ Objetivo
Implementar uma fórmula de **Super Poder**, somando dois atributos com regras matemáticas específicas, comparando o poder final de cada carta.

### ⚙️ Lógica
- O jogador escolhe dois atributos.
- Cada atributo tem uma fórmula específica para cálculo:
  - Ex: População: valor / 1000000
  - Área: valor / 10
  - PIB: valor * 2
  - Pontos Turísticos: valor * 1000
  - Densidade Populacional: valor * 100
- O programa calcula o super poder para cada carta.
- Compara os poderes e exibe o resultado.

### 📅 Exemplo de Entrada
```
Escolha dois atributos para o Super Poder:
Digite o primeiro atributo (1 a 5): 1
Digite o segundo atributo (1 a 5): 3
```

### 📆 Exemplo de Saída
```
Atributos escolhidos: População e PIB

Cálculo do Super Poder:
Carta 1 - São Paulo:
População: 12300000 / 1000000 = 12.3
PIB: 230000 * 2 = 460000
Super Poder: 12.3 + 460000 = 460012.3

Carta 2 - Rio de Janeiro:
População: 6710000 / 1000000 = 6.71
PIB: 160000 * 2 = 320000
Super Poder: 6.71 + 320000 = 320006.71

Resultado: Carta 1 venceu com maior Super Poder!
```

---

## 🛠️ Compilação e Execução

Para compilar e executar qualquer um dos arquivos `.c`, utilize os comandos abaixo no terminal:

```
gcc nivel-novato.c -o novato
./novato

gcc nivel-aventureiro.c -o aventureiro
./aventureiro

gcc nivel-mestre.c -o mestre
./mestre
```

---

## 🤝 Contribuição
Este repositório foi criado como parte do curso de lógica de programação. Professor, sua orientação é muito bem-vinda! Sinta-se à vontade para sugerir melhorias, correções ou novas ideias que possam enriquecer ainda mais este aprendizado.

Agradeço desde já por todo o conhecimento compartilhado até aqui! 🙏

---

Feito com 💙 por Caio Rabelo

