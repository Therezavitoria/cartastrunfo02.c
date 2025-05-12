# cartastrunfo02.c
# Super Trunfo - Comparação de Cartas com Atributo Fixo (PIB)

Este programa em linguagem C simula uma etapa inicial de um jogo no estilo **Super Trunfo**, onde duas cartas de cidades brasileiras são comparadas com base em **um único atributo fixo**: o **PIB (Produto Interno Bruto)**. O objetivo é aplicar estruturas de decisão `if` e `else` para identificar qual cidade vence com base nesse critério.

---

## 📌 Objetivo

Desenvolver um programa simples em C que:
- Cadastra manualmente duas cartas contendo informações sobre cidades.
- Calcula a densidade populacional e o PIB per capita de cada cidade.
- Compara os valores de **PIB** entre as duas cartas.
- Informa ao jogador qual carta vence ou se há empate.

---

## 🧾 Atributos das Cartas

Cada carta representa uma cidade e contém os seguintes dados:

| Atributo               | Tipo      | Descrição                                     |
|------------------------|-----------|-----------------------------------------------|
| `estado`               | `char[]`  | Estado ao qual a cidade pertence              |
| `codigo`               | `char[]`  | Código identificador da carta                 |
| `cidade`               | `char[]`  | Nome da cidade representada                   |
| `populacao`            | `int`     | Número de habitantes                          |
| `area`                 | `float`   | Área da cidade em km²                         |
| `pib`                  | `float`   | Produto Interno Bruto                         |
| `pontos_turisticos`    | `int`     | Quantidade de pontos turísticos               |
| `densidade_populacional` | `float` | Calculado automaticamente (população / área) |
| `pib_per_capita`       | `float`   | Calculado automaticamente (pib / população)   |

---

## 🧠 Lógica do Programa

1. **Entrada de dados**: O programa solicita ao usuário que preencha os dados de duas cidades.
2. **Cálculos automáticos**:
   - Densidade populacional = população / área.
   - PIB per capita = PIB / população.
3. **Comparação**:
   - Compara o PIB das duas cidades usando `if` e `else if`.
   - Exibe qual cidade vence com base no maior PIB.
   - Em caso de valores iguais, declara **empate**.

---

## 🖥️ Exemplo de Execução

```bash
=== Cadastro da Carta 1 ===
Estado: São Paulo
Código da carta: SP01
Nome da cidade: São Paulo
População: 12300000
Área (em km²): 1521
PIB (em reais): 750000000000
Número de pontos turísticos: 12

=== Cadastro da Carta 2 ===
Estado: Rio de Janeiro
Código da carta: RJ02
Nome da cidade: Rio de Janeiro
População: 6710000
Área (em km²): 1182
PIB (em reais): 360000000000
Número de pontos turísticos: 9

=== Indicadores Calculados ===
Carta 1 - São Paulo (São Paulo)
Densidade Populacional: 8086.13 hab/km²
PIB per capita: R$ 60975.61

Carta 2 - Rio de Janeiro (Rio de Janeiro)
Densidade Populacional: 5681.22 hab/km²
PIB per capita: R$ 53628.01

=== Comparação de cartas (Atributo: PIB) ===
São Paulo: R$ 750000000000.00
Rio de Janeiro: R$ 360000000000.00

Resultado: Carta 1 (São Paulo) venceu!

# Super Trunfo - Comparação de Cartas (Versão Básica)

Este programa em C simula uma versão simples do jogo Super Trunfo, comparando duas cartas de cidades brasileiras com base em atributos como população, área, PIB, etc. O código recebe os dados de duas cartas, calcula indicadores como **densidade populacional** e **PIB per capita**, e realiza uma **comparação utilizando o PIB** como critério.

---

## 🧾 Funcionalidades

- Cadastro manual de duas cartas.
- Cálculo automático de:
  - Densidade populacional (população / área).
  - PIB per capita (PIB / população).
- Comparação direta entre as duas cartas com base no PIB.
- Exibição do resultado da carta vencedora ou empate.

---

## 🧠 Atributos da Carta

Cada carta contém os seguintes campos:

- `estado`: nome do estado da cidade.
- `codigo`: código identificador da carta.
- `cidade`: nome da cidade.
- `populacao`: população total da cidade.
- `area`: área territorial da cidade (em km²).
- `pib`: produto interno bruto da cidade (em reais).
- `pontos_turisticos`: número de pontos turísticos.
- `densidade_populacional`: **calculado automaticamente**.
- `pib_per_capita`: **calculado automaticamente**.

---

## 🔢 Lógica de Comparação

Neste programa, a comparação entre as cartas é feita apenas com o **PIB**. A regra de decisão é:

- Se o PIB da **Carta 1** for maior → Carta 1 vence.
- Se o PIB da **Carta 2** for maior → Carta 2 vence.
- Se os PIBs forem iguais → **Empate**.

---

## 🖥️ Exemplo de Saída

=== Cadastro da Carta 1 ===
Estado: São Paulo
Código da carta: SP001
Nome da cidade: São Paulo
População: 12300000
Área (em km²): 1521
PIB (em reais): 750000000000
Número de pontos turísticos: 10

=== Cadastro da Carta 2 ===
Estado: Rio de Janeiro
Código da carta: RJ002
Nome da cidade: Rio de Janeiro
População: 6718903
Área (em km²): 1182
PIB (em reais): 360000000000
Número de pontos turísticos: 8

=== Indicadores Calculados ===
Carta 1 - São Paulo (São Paulo)
Densidade Populacional: 8086.13 hab/km²
PIB per capita: R$ 60975.61

Carta 2 - Rio de Janeiro (Rio de Janeiro)
Densidade Populacional: 5683.91 hab/km²
PIB per capita: R$ 53570.71

=== Comparação de cartas (Atributo: PIB) ===
São Paulo: R$ 750000000000.00
Rio de Janeiro: R$ 360000000000.00

Resultado: Carta 1 (São Paulo) venceu!
